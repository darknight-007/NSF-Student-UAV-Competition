"""
testing offboard attitude control with a simple takeoff script
"""

import rospy
from geometry_msgs.msg import PoseStamped, Point, Quaternion, TwistStamped
import numpy as np

TAKEOFF_HEIGHT = 1.5
TAKEOFF_INCREMENT = 0.005


class OffbPosCtl:
    curr_pose = PoseStamped()
    des_pose = PoseStamped()

    def __init__(self):
        rospy.init_node('offboard_test_attitude', anonymous=True)
        pose_pub = rospy.Publisher('/mavros/setpoint_position/local', PoseStamped, queue_size=10)
        pose_sub = rospy.Subscriber('/mavros/local_position/pose', PoseStamped, callback=self.pose_cb)

        rate = rospy.Rate(10)  # Hz
        rate.sleep()
        self.des_pose = self.copy_pose(self.curr_pose)
        print self.curr_pose

        while not rospy.is_shutdown():
            if self.curr_pose.pose.position.z < TAKEOFF_HEIGHT and self.des_pose.pose.position.z < TAKEOFF_HEIGHT:
                self.des_pose.pose.position.z += TAKEOFF_INCREMENT
            else:
                self.des_pose.pose.position.z = TAKEOFF_HEIGHT

            pose_pub.publish(self.des_pose)
            # print self.des_pose, self.curr_pose
            rate.sleep()

    def copy_pose(self, pose):
        pt = pose.pose.position
        quat = pose.pose.orientation
        copied_pose = PoseStamped()
        copied_pose.header.frame_id = pose.header.frame_id
        copied_pose.pose.position = Point(pt.x, pt.y, pt.z)
        copied_pose.pose.orientation = Quaternion(quat.x, quat.y, quat.z, quat.w)
        return copied_pose

    def pose_cb(self, msg):
        # print msg
        self.curr_pose = msg

    def gen_coeffs(self, t0, tf, x0, xf):

        return A

    def calc_traj(self, A, t):

        return [pos, vel, acc]


if __name__ == "__main__":
    OffbPosCtl()
