#!/usr/bin/env python

import numpy

from numpy import *

#compute the angular velocity of each link

def angularVel(R,w_i,dq,z,joint_config):
	if joint_config == 0:
		w_ip1 = numpy.dot(R,w_i)
	elif joint_config == 1:
		w_ip1 = numpy.dot(R,w_i)+numpy.dot(dq,z)
	return w_ip1
