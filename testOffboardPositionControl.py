#!/usr/bin/env python
import roslib

import rospy
from std_msgs.msg import Float64
from geometry_msgs.msg import PoseStamped, Quaternion
from std_msgs.msg import Header
from tf.transformations import quaternion_from_euler


class OffboardPositionControl:
    x = 0
    y = 0
    z = 0

    def __init__(self):
        self.pubList = list()
        self.posPub = rospy.Publisher('mavros/setpoint_position/local', PoseStamped, queue_size=10)

        rospy.init_node('pos_offboard', anonymous=True)
        r = rospy.Rate(10)






        while True:
            timeNow = rospy.Time.now()
            msg = PoseStamped()
            msg.header = Header()
            msg.header.frame_id = "base_footprint"
            msg.header.stamp = rospy.Time.now()

            msg.pose.position.x = self.x
            msg.pose.position.y = self.y
            msg.pose.position.z = self.z
            msg.header.stamp = timeNow

            self.posPub.publish(msg)
            self.x += 0.0001
            self.y += 0.0001
            self.z += 0.0001

            r.sleep()




if __name__ == '__main__':
    attControl = OffboardPositionControl()

