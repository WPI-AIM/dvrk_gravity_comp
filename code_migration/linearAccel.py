#!/usr/bin/env python

import numpy

from numpy import *

#for revolute joint
def linearAccelRev(R,w_i,dw_i,P,dv_i):

	wxP_i = numpy.cross(w_i.T,P).T
	dwxP_i = numpy.cross(dw_i.T,P).T
	dv_ip1 = numpy.dot(R,dwxP_i + numpy.cross(w_i.T,wxP_i.T).T + dv_i)
	
	return dv_ip1

#for prismatic joint
def linearAccelPris(R,w_i,dw_i,P,dv_i,d_d,dd_d,z):

	dwxP_i = numpy.cross(dw_i,P)
	wxP_i = numpy.cross(w_i,P)
	dv_ip1 = numpy.dot(R,dwxP_i + numpy.cross(w_i,wxP_i) + dv_i) + numpy.cross(numpy.dot(2.0,w_ip1),numpy.dot(d_d,z)) + numpy.dot(dd_d,z)

	return dv_ip1
