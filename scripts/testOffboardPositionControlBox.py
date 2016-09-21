"""
testing offboard positon control with a simple takeoff script
"""

import rospy
from mavros_msgs.msg import State
from geometry_msgs.msg import PoseStamped, Point, Quaternion

TAKEOFF_HEIGHT = 5
TAKEOFF_INCREMENT = 0.05


class OffbPosCtl:
    curr_pose = PoseStamped()

    des_pose = PoseStamped()
    isReadyToFly = False

    def __init__(self):
        rospy.init_node('offboard_test', anonymous=True)
        pose_pub = rospy.Publisher('/mavros/setpoint_position/local', PoseStamped, queue_size=10)
        mocap_sub = rospy.Subscriber('/mavros/local_position/pose', PoseStamped, callback=self.mocap_cb)
        state_sub = rospy.Subscriber('/mavros/state', State, callback=self.state_cb)

        rate = rospy.Rate(10)  # Hz
        rate.sleep()
        self.des_pose = self.copy_pose(self.curr_pose)
        print self.curr_pose

        while not rospy.is_shutdown():
            if self.isReadyToFly:
                self.des_pose.pose.position.x = 15
                self.des_pose.pose.position.y = 15
                self.des_pose.pose.position.z = 0.5
            pose_pub.publish(self.des_pose)
            rate.sleep()

    def copy_pose(self, pose):
        pt = pose.pose.position
        quat = pose.pose.orientation
        copied_pose = PoseStamped()
        copied_pose.header.frame_id = pose.header.frame_id
        copied_pose.pose.position = Point(pt.x, pt.y, pt.z)
        copied_pose.pose.orientation = Quaternion(quat.x, quat.y, quat.z, quat.w)
        return copied_pose

    def mocap_cb(self, msg):
        # print msg
        self.curr_pose = msg


    def state_cb(self,msg):
        print msg.mode
        if(msg.mode=='OFFBOARD'):
            self.isReadyToFly = True
            print "readyToFly"


if __name__ == "__main__":
    OffbPosCtl()