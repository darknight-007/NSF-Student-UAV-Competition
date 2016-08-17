"""
testing offboard control with different sequences.
"""

import rospy
from geometry_msgs.msg import PoseStamped, Point, Quaternion
from mavros_msgs.msg import ExtendedState
import math
import numpy as np

TAKEOFF_HEIGHT = 1.0  # metres
MOTION_INCREMENT = 0.01  # metres
HOVER_DURATION = 20  # seconds
CIRCLE_DURATION = 30  # seconds
CIRCLE_RAD = 1  # metres
NCIRCLES = 1.0  # number of circles


class OffbPosCtl:
    curr_pose = PoseStamped()
    des_pose = PoseStamped()
    init_pose = PoseStamped()
    curr_state = ExtendedState()

    def __init__(self):
        rospy.init_node('offboard_sequences', anonymous=True)
        self.pose_pub = rospy.Publisher('/mavros/setpoint_position/local', PoseStamped, queue_size=10)
        self.pose_sub = rospy.Subscriber('/mavros/local_position/pose', PoseStamped, callback=self.pose_cb)
        self.ext_state_sub = rospy.Subscriber('/mavros/extended_state', ExtendedState, callback=self.ext_state_cb)

        self.rate = rospy.Rate(10)  # Hz

        self.rate.sleep()
        self.init_pose = self.copy_pose(self.curr_pose)
        self.des_pose = self.copy_pose(self.curr_pose)
        print self.init_pose

    def takeoff(self):
        """
        UAV will takeoff to a height defined as TAKEOFF_HEIGHT, maintaining the initial x,y coordinates and orientation.
        """
        if not rospy.is_shutdown():
            print "offboard takeoff initiated"
            init_time = rospy.get_time()
            while rospy.Duration.from_sec(rospy.get_time() - init_time) < rospy.Duration(HOVER_DURATION):
                if self.curr_pose.pose.position.z < TAKEOFF_HEIGHT and self.des_pose.pose.position.z < TAKEOFF_HEIGHT:
                    self.des_pose.pose.position.z += MOTION_INCREMENT
                else:
                    self.des_pose.pose.position.z = TAKEOFF_HEIGHT

                self.pose_pub.publish(self.des_pose)
                # print self.des_pose
                self.rate.sleep()

    def land(self):
        """
        UAV will land at the current x,y position, maintaining orientation.
        """
        print "offboard landing initiated"
        init_z = self.init_pose.pose.position.z
        landed = False
        while not rospy.is_shutdown():
            while not landed:
                if self.curr_state.landed_state != 1:
                    self.des_pose.pose.position.z -= MOTION_INCREMENT
                    self.pose_pub.publish(self.des_pose)
                    # print self.des_pose
                    self.rate.sleep()
                else:
                    landed = True
                    landed_pose = self.copy_pose(self.curr_pose)
                # print "landed: " + str(landed)

            self.pose_pub.publish(landed_pose)  # TODO quad moves after landing. change mode?
            # print landed_pose
            self.rate.sleep()

    def circle(self):
        """
        UAV will complete a circular path, around (0,0) at the current height and orientation.
        """
        print "circle path initiated"
        t_init = rospy.get_time()
        t = rospy.Duration(0)
        while t <= rospy.Duration(7):
            self.des_pose.pose.position.x = CIRCLE_RAD*1
            self.des_pose.pose.position.y = CIRCLE_RAD*0

            self.pose_pub.publish(self.des_pose)
            # print self.des_pose
            self.rate.sleep()
            t = rospy.Duration.from_sec(rospy.get_time() - t_init)

        t_init = rospy.get_time()
        t = 0
        while t <= NCIRCLES:
            theta = t*2*math.pi
            self.des_pose.pose.position.x = CIRCLE_RAD*math.cos(theta)
            self.des_pose.pose.position.y = CIRCLE_RAD*math.sin(theta)

            self.pose_pub.publish(self.des_pose)
            # print self.des_pose
            self.rate.sleep()
            t = rospy.Duration.from_sec(rospy.get_time() - t_init) / rospy.Duration(CIRCLE_DURATION)

    def square(self):
        """
        UAV will complete a square path, around (0,0) at the current height and orientation.
        """
        print "square path initiated"
        SIDE = 2
        HALF_SIDE = SIDE/2
        corners = [(HALF_SIDE, HALF_SIDE), (-HALF_SIDE, HALF_SIDE), (-HALF_SIDE, -HALF_SIDE), (HALF_SIDE, -HALF_SIDE)]
        for corner in corners:
            t_init = rospy.get_time()
            t = rospy.Duration(0)
            while t <= rospy.Duration(8):
                self.des_pose.pose.position.x = corner[0]
                self.des_pose.pose.position.y = corner[1]
                self.pose_pub.publish(self.des_pose)
                # print self.des_pose
                self.rate.sleep()
                t = rospy.Duration.from_sec(rospy.get_time() - t_init)

    def copy_pose(self, pose):
        """
        creates a copy of a PoseStamped object
        """
        pt = pose.pose.position
        quat = pose.pose.orientation
        copied_pose = PoseStamped()
        copied_pose.header.frame_id = pose.header.frame_id
        copied_pose.header.stamp = rospy.Time.now()
        copied_pose.pose.position = Point(pt.x, pt.y, pt.z)
        copied_pose.pose.orientation = Quaternion(quat.x, quat.y, quat.z, quat.w)
        return copied_pose

    def pose_cb(self, msg):
        # print msg
        self.curr_pose = msg

    def ext_state_cb(self, msg):
        self.curr_state = msg


if __name__ == "__main__":
    offb = OffbPosCtl()
    offb.takeoff()
    offb.square()
    offb.circle()
    offb.land()
