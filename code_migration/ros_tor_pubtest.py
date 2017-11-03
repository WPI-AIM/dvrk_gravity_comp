#!/usr/bin/env python

import rospy
import numpy

from sensor_msgs.msg import JointState
from newtonEulerMTM import *
from daVinci_param import *

pos = numpy.array([0,0,0,0,0,0,0])

q = numpy.array([pos[0],pos[1],pos[2],pos[3],pos[4],pos[5],pos[6]])

dh_table = davinci_param(q)
joint_config = numpy.array([1,1,1,1,1,1,1])
dq = numpy.array([0,0,0,0,0,0,0])
ddq = numpy.array([0,0,0,0,0,0,0])

torque = newtonEuler(dh_table, dq,ddq, joint_config)
print(torque)

def pub_tor():
		pub = rospy.Publisher('/dvrk/MTMR/set_torque_joint',JointState.effort, queue_size=10)
		rospy.init_node('pub_tor', anonymous=True)
		rate = rospy.Rate(10) # 10hz
		while not rospy.is_shutdown():
			pub.pusblish(torque)
			rate.sleep()

if __name__ == '__main__':
		try:
			pub_tor()
		except rospy.ROSInterruptException:
			pass