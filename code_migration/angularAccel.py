#!/usr/bin/env python

import numpy

from numpy import *

#compute the angular acceleration of each link
def angularAccel(R,w_i,dw_i,dq,ddq,z,joint_config):
	if joint_config == 0:
		dw_ip1 = numpy.dot(R,dw_i)
	elif joint_config == 1:
		R_dw_dot = numpy.dot(R,dw_i)
		R_w_dot = numpy.dot(R,w_i)
		dw_ip1 = R_dw_dot + numpy.cross(R_w_dot.T,numpy.dot(dq,z).T).T + numpy.dot(ddq,z)
		
	return dw_ip1
