#!/usr/bin/env python


import rospy
#from std_msgs.msg import String
from sensor_msgs.msg import JointState
from std_msgs.msg import Float64MultiArray


pub = rospy.Publisher('my_pos_node', Float64MultiArray)        #, queue_size=10
msg = Float64MultiArray()

def callback(data):
    tup = data.position
    rospy.loginfo(rospy.get_caller_id())
    print (tup)
    l = len(tup)
    msg.layout.dim = []
    msg.layout.data_offset = 0
    msg.data = tup
    print(msg.data)
    pub.publish(msg)

def pos_listener():

    # In ROS, nodes are uniquely named. If two nodes with the same
    # node are launched, the previous one is kicked off. The
    # anonymous=True flag means that rospy will choose a unique
    # name for our 'talker' node so that multiple talkers can
    # run simultaneously.
    rospy.init_node('pos_listener_nd_pub', anonymous=True)

    
    rospy.Subscriber("joint_states/joint_position_current", JointState, callback)
    
    # spin() simply keeps python from exiting until this node is stopped
    rospy.spin()

if __name__ == '__main__':
    pos_listener()
