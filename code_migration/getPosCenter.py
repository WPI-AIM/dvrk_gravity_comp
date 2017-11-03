#!/usr/bin/env python

from numpy import *
#from sympy import *
from dh_transform import *
from forwardKin import *
#from scipy.misc import *

#Testing parameters
# dh_table = numpy.array([[pi/6,2,3,0],[pi/4,5,10,pi/2],[pi/2,4,1,pi/2],[0,5,3,0]])

# cm1 = numpy.array([[1],[1],[1]])
# cm2 = numpy.array([[1],[1],[1]])
# cm3 = numpy.array([[1],[1],[1]])
# cm4 = numpy.array([[1],[1],[1]])
# cm = numpy.concatenate((cm1,cm2,cm3,cm4),axis=1)


#This function actually computes the length from ith joint to its center of mass
def getPosCenter(i,dh_table,cm):

	theta_i = dh_table[i-1,0]
	d_i = dh_table[i-1,1]
	a_i = dh_table[i-1,2]
	alpha_i = dh_table[i-1,3]
	#get position matrix of the ith link
	T_i = dhTransform(theta_i,d_i,a_i,alpha_i)
	#get position of the ith joint
	P_i = T_i[0:3,3]
	# print P_i
	#get position of the center of mass of ith joint
	#Note: we cannot use forwardPositionKinematics function since it produces the position of the 
	#link's center of mass with respect to the base frame
	i_cm = translationMatrix(cm,'all')
	T_ic = numpy.dot(T_i,i_cm)
	P_ic = T_ic[0:3,3]
	# print P_ic
	P_rc = P_ic - P_i

	return P_rc

#Function Test 
# P_rc1 = getPosCenter(1,dh_table,cm[:,1])
# print P_rc1