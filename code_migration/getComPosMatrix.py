#!/usr/bin/env python

from numpy import *
#from sympy import *
from dh_transform import dhTransform
from forwardKin import *
#from scipy.misc import *

def getPosMatrix(i,dh_table):
	
	#for ith link
	theta_i = dh_table[i-1,0]
	d_i = dh_table[i-1,1]
	a_i = dh_table[i-1,2]
	alpha_i = dh_table[i-1,3]
	#Get the position matrix
	T_i = dhTransform(theta_i,d_i,a_i,alpha_i)
	#print "T_",i-1
	#print T_i
	#for ith+1 link 
	theta_ip1 = dh_table[i,0]
	d_ip1 = dh_table[i,1]
	a_ip1 = dh_table[i,2]
	alpha_ip1 = dh_table[i,3]
	#Get the position matrices
	T_ip1 = dhTransform(theta_ip1,d_ip1,a_ip1,alpha_ip1)
	T = numpy.dot(T_i,T_ip1)
	#print "T_",i
	#print T_ip1
	P = T[0:3,3]
	return P
