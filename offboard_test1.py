"""
testing offboard control on the energetics UAV
"""

import rospy
from geometry_msgs.msg import PoseStamped


class OffbPosCtl:

    def __init__(self):
        self.curr_pose = PoseStamped()
        rospy.init_node('offboard_energetics', anonymous=True)
        local_pos_pub = rospy.Publisher('/mavros/setpoint_position/local', PoseStamped, queue_size=10)
        pose_sub = rospy.Subscriber('/mavros/local_position/pose', PoseStamped, callback=self.pose_cb)

        rate = rospy.Rate(10)  # Hz
        des_pose = PoseStamped()
        des_pose.pose.position.x = 0.0
        des_pose.pose.position.y = 0.0
        des_pose.pose.position.z = 0.0

        rate.sleep()
        des_pose.pose.orientation = self.curr_pose.pose.orientation
        # print self.curr_pose
        # print des_pose.pose

        while not rospy.is_shutdown():
            if des_pose.pose.position.z < 1.0:
                des_pose.pose.position.z += 0.005
            local_pos_pub.publish(des_pose)
            rate.sleep()

    def pose_cb(self, msg):
        # print msg
        self.curr_pose = msg


if __name__ == "__main__":
    OffbPosCtl()
