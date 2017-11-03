#!/usr/bin/env python
import rospy

from numpy import *
from dh_transform import dhTransform
from forwardKin import *
from getPosMatrix import getPosMatrix
from getRotMatrix import getRotMatrix
from angularVel import *
from angularAccel import *
from linearAccel import *
from forceMoment import *

pi = numpy.pi

###### This file is an exact copy of the newtonEuler.py for the testing of helper functions ######

#Testing parameters and DH table of 4 DOF manipulator
dh_table = numpy.array([[pi/6,2,3,0],[pi/4,5,10,pi/2],[pi/2,4,1,pi/2],[0,5,3,0]])
rho = numpy.array([1,1,1,1])
dq = numpy.array([1,1,1,1])
ddq = numpy.array([1,1,1,1])
joint_config = numpy.array([1,1,1,1])
cm1 = numpy.array([[2],[2],[2]])
cm2 = numpy.array([[1],[1],[1]])
cm3 = numpy.array([[1],[1],[1]])
cm4 = numpy.array([[1],[1],[1]])
cm = numpy.concatenate((cm1,cm2,cm3,cm4),axis=1)
m = numpy.array([1,1,1,1])
#print cm

# The Newton-Euler algorithm computes the torque for each joint of the manipulator
def newtonEuler(dh_table, dq,ddq, joint_config):
	#compute rotational and linear velocity and acceleration
	n = len(dh_table)
	g = 9.81			#gravitational acceleration (scalar)
	
	w_i = numpy.array([[0],[0],[0]])		#ground angular velocity
	dw_i = numpy.array([[0],[0],[0]])		#ground angular acceleration
	v_i = numpy.array([[0],[0],[0]])		#initial linear velocity
	dv_i = numpy.array([[0],[0],[-g]])		#gravitational acceleration
	z = numpy.array([[0],[0],[1]])
	
	if len(joint_config) != len(dh_table):
		print "cannot find solution"
	
	else:
		for i in range (0,n):
			R = getRotMatrix(i,dh_table)
			P = getPosMatrix(i,dh_table)	
			
			w_i = angularVel(R,w_i,dq[i],z,joint_config[i])
			dw_i = angularAccel(R,w_i,dw_i,dq[i],ddq[i],z,joint_config[i])
			dv_i = linearAccel(R,dw_i,P,dv_i,joint_config[i])
				
			##linear acceleration at center of mass
			#compute position of the center of mass of link ith
			P_Ci = forwardPositionKinematics(i,dh_table,cm)
			P_Ci = P_Ci.reshape((3,1))
			#let component1 = dw_i x P_ci
			comp_c1 = numpy.cross(dw_i.T,P_Ci.T)
			dv_ci = comp_c1.T + numpy.cross(w_i.T,comp_c1).T+dv_i
				
			#compute force and moment components
			#F_i, N_i = forceMoment(m[i],dv_i,I_ci,dw_i)
			#f_i = numpy.dot(R,f_ip1) + F_i
				
	return w_i, dw_i, dv_i, P_Ci, dv_ci
	
#algorithm test
w_1, dw_1, dv_1, P_C1, dv_c1 = newtonEuler(dh_table,dq,ddq,joint_config)
print "w_1"
print w_1
print "dw_1"
print dw_1
print "dv_1"
print dv_1
print "P_C1"
print P_C1
print "dv_c1"
print dv_c1

