"""
testing offboard control with different sequences.
"""

import rospy
from geometry_msgs.msg import PoseStamped

TAKEOFF_HEIGHT = 1.0
MOTION_INCREMENT = 0.005


class OffbPosCtl:
    curr_pose = PoseStamped()
    des_pose = PoseStamped()

    def __init__(self):
        rospy.init_node('offboard_sequences', anonymous=True)
        self.pose_pub = rospy.Publisher('/mavros/setpoint_position/local', PoseStamped, queue_size=10)
        self.pose_sub = rospy.Subscriber('/mavros/local_position/pose', PoseStamped, callback=self.pose_cb)

        self.rate = rospy.Rate(10)  # Hz

        self.rate.sleep()
        self.init_pose = self.curr_pose
        self.des_pose.pose.position = self.init_pose.pose.position
        self.des_pose.pose.orientation = self.init_pose.pose.orientation
        # print self.curr_pose

    def takeoff(self):
        if not rospy.is_shutdown():
            print "offboard takeoff initiated"
            init_time = rospy.get_time()
            while rospy.Duration.from_sec(rospy.get_time() - init_time) < rospy.Duration(30):
                if self.curr_pose.pose.position.z < TAKEOFF_HEIGHT:
                    self.des_pose.pose.position.z += MOTION_INCREMENT
                else:
                    self.des_pose.pose.position.z = TAKEOFF_HEIGHT

                self.pose_pub.publish(self.des_pose)
                # print self.des_pose.pose
                self.rate.sleep()

    def land(self):
        print "\noffboard landing initiated"
        init_z = self.init_pose.pose.position.z
        while not rospy.is_shutdown():
            if self.curr_pose.pose.position.z > init_z:
                self.des_pose.pose.position.z -= MOTION_INCREMENT #TODO
                print "moving down"
            else:
                self.des_pose.pose.position.z = init_z

            self.pose_pub.publish(self.des_pose)
            # print self.des_pose.pose
            self.rate.sleep()

    def pose_cb(self, msg):
        # print msg
        self.curr_pose = msg


if __name__ == "__main__":
    offb = OffbPosCtl()
    offb.takeoff()
    offb.land()
