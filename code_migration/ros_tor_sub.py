#!/usr/bin/env python

import rospy

from sensor_msgs.msg import JointState
from geometry_msgs.msg import WrenchStamped

#testing code for wrench subscription

def callback(data):
    tup = data
    rospy.loginfo(rospy.get_caller_id())
    print(tup)

def tor_listener():

	rospy.init_node('tor_listener', anonymous=True)

	rospy.Subscriber('/dvrk/MTML/wrench_body_current',WrenchStamped, callback)

	rospy.spin()

if __name__ == '__main__':
	tor_listener()