#!/usr/bin/env python

import rospy
import numpy

from numpy import *

from sensor_msgs.msg import JointState
from newtonEulerMTM import *
from daVinci_param import davinci_param 

#testing code for joint state subscription

tup = None

def callback(data):
	global tup
	global tor
	tup = data.position
	tor = data.effort
	rospy.loginfo(rospy.get_caller_id())
	
	print(tup)
	# print(tup[0])

def pos_sub():
	pos = rospy.init_node('pos_sub',anonymous=True)
	rospy.Subscriber("/dvrk/MTML/joint_states",JointState, callback)

	rospy.spin()

if __name__ == '__main__':
	pos_sub()

effort = numpy.array([tor[0],tor[1],tor[2],tor[3],tor[4],tor[5],tor[6],tor[7]])
q = numpy.array([tup[0],tup[1],tup[2],tup[3],tup[4],tup[5],tup[6]])
# print(q)

dh_table,cm,m = davinci_param(q)
joint_config = numpy.array([1,1,1,1,1,1,1])
torque = newtonEuler(dh_table,dq,ddq,joint_config)
print('torque:')
print(torque)

