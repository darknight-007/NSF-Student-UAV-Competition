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
HOVER_DURATION = 15  # seconds
CIRCLE_DURATION = 10  # seconds
CIRCLE_RAD = 1.0  # metres
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

    # def circle(self):
    #     t_init = rospy.get_time()
    #     t = 0
    #     while t <= NCIRCLES:
    #         t = rospy.Duration.from_sec(rospy.get_time() - t_init)/rospy.Duration(CIRCLE_DURATION)
    #         theta = t*2*math.pi
    #         self.des_pose.pose.position.x = CIRCLE_RAD*math.cos(theta)
    #         self.des_pose.pose.position.y = CIRCLE_RAD*math.sin(theta)
    #
    #         self.pose_pub.publish(self.des_pose)
    #         # print self.des_pose.pose
    #         self.rate.sleep()

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
                # print self.des_pose.pose
                self.rate.sleep()

    def land(self):
        """
        UAV will land at the current x,y position, maintaining orientation.
        """
        print "\noffboard landing initiated"
        while not rospy.is_shutdown():
            if self.curr_pose.pose.position.z > self.init_pose.pose.position.z and self.curr_state.landed_state != 1:
                self.des_pose.pose.position.z -= MOTION_INCREMENT
                # print "moving down"
            elif self.curr_state.landed_state == 1:
                landed_pose = self.copy_pose(self.curr_pose)
                self.des_pose = self.copy_pose(landed_pose)

            self.pose_pub.publish(self.des_pose)
            # print self.des_pose.pose
            self.rate.sleep()

    def copy_pose(self, pose):
        """
        creates a deep copy of a PoseStamped object without the header
        """
        pt = pose.pose.position
        quat = pose.pose.orientation
        copied_pose = PoseStamped()
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
    # offb.circle()
    offb.land()
