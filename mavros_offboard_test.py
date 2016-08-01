'''
 mavros_offboard_test.py
 converts offb_node.cpp from C++ to Python
 brief offboard example node, written with mavros version xxx, px4 flight
 stack and testing in Gazebo SITL
'''

import rospy

from geometry_msgs.msg import PoseStamped
from mavros_msgs.srv import CommandBool
from mavros_msgs.srv import SetMode
from mavros_msgs.msg import State


def main():
    global current_state
    current_state = State()
    rospy.init_node('offb', anonymous=True)
    state_sub = rospy.Subscriber('/mavros/state', State, state_cb, queue_size=10)
    local_pos_pub = rospy.Publisher('mavros/setpoint_position/local', PoseStamped, queue_size=10)
    arming_client = rospy.ServiceProxy('mavros/cmd/arming', CommandBool)
    set_mode_client = rospy.ServiceProxy('mavros/set_mode', SetMode)

    # the setpoint publishing rate MUST be faster than 2Hz
    rate = rospy.Rate(10) # Hz

    # wait for FCU connection
    while not rospy.is_shutdown() and current_state.connected:
        rate.sleep()

    pose = PoseStamped();
    pose.pose.position.x = 0;
    pose.pose.position.y = 0;
    pose.pose.position.z = 2;

    # send a few setpoints before starting
    for i in range(100):
        while not rospy.is_shutdown:
            local_pos_pub.publish(pose)
            rate.sleep()

    # set to offboard mode, then arm
    set_mode_client = (0, 'OFFBOARD')
    arming_client(True)

    last_request = rospy.Time.now()

    while not rospy.is_shutdown:
        local_pos_pub.publish(pose);
        rate.sleep();
    
def state_cb(msg):
    current_state = msg


if __name__ == "__main__":    
    main()