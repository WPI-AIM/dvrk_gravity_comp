#!/usr/bin/env python

import numpy

from numpy import *

def forceMoment(m,dv_ci,dv_i,I_ci,w_i,dw_i):
	#Force component
	F_i = numpy.dot(m,dv_ci)
	#Moment component
	N_i = numpy.dot(I_ci,dw_i) + numpy.cross(w_i.T,numpy.dot(I_ci,w_i).T).T

	return F_i, N_i

