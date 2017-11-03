#!/usr/bin/env python

import numpy

from numpy import *
from forwardKin import *

#Testing parameters
dh_table = numpy.array([[pi/6,2,3,0],[pi/4,5,10,pi/2],[pi/2,4,1,pi/2],[0,5,3,0]])

cm1 = numpy.array([[1],[1],[1]])
cm2 = numpy.array([[1],[1],[1]])
cm3 = numpy.array([[1],[1],[1]])
cm4 = numpy.array([[1],[1],[1]])
cm = numpy.concatenate((cm1,cm2,cm3,cm4),axis=1)

m = numpy.array([1,1,1,1])

#This function takes masses, the DH parameter, and center of mass of each link to compute and 
#generate the inertia tensor matrix
def inertiaTensor(m,dh_table,cm):

	n = len(dh_table)
	I = numpy.zeros((n,3,3))
	for i in range (0,n):
		P_ci = forwardPositionKinematics(i,dh_table,cm)
		I[i,0,0] = I[i,0,0] + (m[i]*(P_ci[1]**2 + P_ci[2]**2))
		I[i,1,1] = I[i,1,1] + (m[i]*(P_ci[0]**2 + P_ci[2]**2))
		I[i,2,2] = I[i,2,2] + (m[i]*(P_ci[0]**2 + P_ci[1]**2))
		I[i,0,1] = I[i,0,1] + (m[i]*P_ci[0]*P_ci[1])
		#I[i,1,0] = I[i,1,0] + (m[i]*P_ci[0]*P_ci[1])
		I[i,0,2] = I[i,0,2] + (m[i]*P_ci[0]*P_ci[2])
		#I[i,2,0] = I[i,2,0] + (m[i]*P_ci[0]*P_ci[2])
		I[i,1,2] = I[i,1,2] + (m[i]*P_ci[1]*P_ci[2])
		#I[i,2,1] = I[i,2,1] + (m[i]*P_ci[1]*P_ci[2])

	I[:,0,1] = -I[:,0,1]
	I[:,1,0] = I[:,0,1]
	I[:,0,2] = -I[:,0,2]
	I[:,2,0] = I[:,0,2]
	I[:,1,2] = -I[:,1,2]
	I[:,2,1] = I[:,1,2]
	return I


#Function test
# I = inertiaTensor(m,dh_table,cm)
# print I
