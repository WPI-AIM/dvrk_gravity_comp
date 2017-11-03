#!/usr/bin/env python

import rospy

from newtonEulerMTM import * 

from std_msgs.msg import Float64MultiArray
from cisst_msgs.msg import vctDoubleVec



def tor_pub():
	pub = rospy.Publisher('/dvrk/MTMR/',)
	rospy.init_node('tor_pub', anonymous=True)
	rate = rospy.Rate(10) #currently set public rate to 10 Hz
	while not rospy.is_shutdown():
		torque = newtonEuler



if __name__ == '__main__':
	try:
		tor_pub()
	except rospy.RosInterruptException:
		pass