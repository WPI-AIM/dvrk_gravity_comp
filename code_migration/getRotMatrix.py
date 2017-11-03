#!/usr/bin/env python
import rospy

from numpy import *
#from sympy import *
from dh_transform import dhTransform
from forwardKin import *
#from scipy.misc import *

def getRotMatrix(i,dh_table):
	#get the rotation matrix of ith and ith+1 transformation matrix

	#for ith link
	theta_i = dh_table[i-1,0]
	d_i = dh_table[i-1,1]
	a_i = dh_table[i-1,2]
	alpha_i = dh_table[i-1,3]
	#for ith+1 link 
	theta_ip1 = dh_table[i,0]
	d_ip1 = dh_table[i,1]
	a_ip1 = dh_table[i,2]
	alpha_ip1 = dh_table[i,3]
	#Get the ration matrices
	T_i = dhTransform(theta_i,d_i,a_i,alpha_i)
	T_ip1 = dhTransform(theta_ip1,d_ip1,a_ip1,alpha_ip1)
	T = numpy.dot(T_i,T_ip1)
	R = T[0:3,0:3]
	return R

#function test
#R_i, R_ip1 = getRotMatrix(1,dh_table)
#print R_i
#print R_ip1

