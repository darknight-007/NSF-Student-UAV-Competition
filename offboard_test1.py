"""
testing offboard control on the energetics UAV
"""

import rospy
from geometry_msgs.msg import PoseStamped, Point, Quaternion

TAKEOFF_HEIGHT = 1.0
TAKEOFF_INCREMENT = 0.005


class OffbPosCtl:
    curr_pose = PoseStamped()
    des_pose = PoseStamped()

    def __init__(self):
        rospy.init_node('offboard_energetics', anonymous=True)
        pose_pub = rospy.Publisher('/mavros/setpoint_position/local', PoseStamped, queue_size=10)
        pose_sub = rospy.Subscriber('/mavros/local_position/pose', PoseStamped, callback=self.pose_cb)

        rate = rospy.Rate(10)  # Hz
        rate.sleep()
        self.des_pose = self.copy_pose(self.curr_pose)
        # print self.curr_pose

        while not rospy.is_shutdown():
            if self.curr_pose.pose.position.z < TAKEOFF_HEIGHT and self.des_pose.pose.position.z < TAKEOFF_HEIGHT:
                self.des_pose.pose.position.z += TAKEOFF_INCREMENT
            else:
                self.des_pose.pose.position.z = TAKEOFF_HEIGHT

            pose_pub.publish(self.des_pose)
            # print self.des_pose.pose
            rate.sleep()

    def copy_pose(self, pose):
        pt = pose.pose.position
        quat = pose.pose.orientation
        copied_pose = PoseStamped()
        copied_pose.pose.position = Point(pt.x, pt.y, pt.z)
        copied_pose.pose.orientation = Quaternion(quat.x, quat.y, quat.z, quat.w)
        return copied_pose

    def pose_cb(self, msg):
        # print msg
        self.curr_pose = msg


if __name__ == "__main__":
    OffbPosCtl()
