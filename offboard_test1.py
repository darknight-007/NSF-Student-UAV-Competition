"""
testing offboard control on the energetics UAV
"""

import rospy
from geometry_msgs.msg import PoseStamped

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
        init_pose = self.curr_pose
        self.des_pose.pose.position = init_pose.pose.position
        self.des_pose.pose.orientation = init_pose.pose.orientation
        # print self.curr_pose

        while not rospy.is_shutdown():
            if self.curr_pose.pose.position.z < TAKEOFF_HEIGHT:
                self.des_pose.pose.position.z += TAKEOFF_INCREMENT
            else:
                self.des_pose.pose.position.z = TAKEOFF_HEIGHT

            pose_pub.publish(self.des_pose)
            # print des_pose.pose
            rate.sleep()

    def pose_cb(self, msg):
        # print msg
        self.curr_pose = msg


if __name__ == "__main__":
    OffbPosCtl()
