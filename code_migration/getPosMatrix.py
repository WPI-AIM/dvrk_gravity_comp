#!/usr/bin/env python

from numpy import *
#from sympy import *
from dh_transform import dhTransform
from forwardKin import forwardPositionKinematics
from forwardKin import *
#from scipy.misc import *

# dh_table = numpy.array([[pi/6,2,3,0],[pi/4,5,10,pi/2],[pi/2,4,1,pi/2],[0,5,3,0]])

# cm1 = numpy.array([[1],[1],[1]])
# cm2 = numpy.array([[1],[1],[1]])
# cm3 = numpy.array([[1],[1],[1]])
# cm4 = numpy.array([[1],[1],[1]])
# cm = numpy.concatenate((cm1,cm2,cm3,cm4),axis=1)

#This function actually computes the link length not the position of the joint

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
	P_i = T_i[0:3,3]
	P_ip1 = T_ip1[0:3,3]
	#print P_ip1
	#print P_i
	P_r = P_ip1 - P_i 
	return P_r
	
#function test
#P_c1 = getPosMatrix(1,dh_table,cm)
#print P_c1
#print P_c1.shape
#print P_ip1
#print P_ip1.shape


