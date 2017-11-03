#!/usr/bin/env python
import rospy
import numpy
#import sympy

from dh_transform import dhTransform
from dh_transform import translationMatrix
from numpy import *
#from sympy import *

pi = numpy.pi

#Test DH table
dh_table = numpy.array([[pi/6,2,3,0],[pi/4,5,10,pi/2],[pi/2,4,1,pi/2],[0,5,3,0]])

cm1 = numpy.array([[1],[1],[1]])
cm2 = numpy.array([[1],[1],[1]])
cm3 = numpy.array([[1],[1],[1]])
cm4 = numpy.array([[1],[1],[1]])
cm = numpy.concatenate((cm1,cm2,cm3,cm4),axis=1)

#cm1_x, cm1_y, cm1_z = symbols('cm1_x cm1_y cm1_z',real=True)
#cm2_x, cm2_y, cm2_z = symbols('cm2_x cm2_y cm2_z',real=True)
#cm3_x, cm3_y, cm3_z = symbols('cm3_x cm3_y cm3_z',real=True)
#cm4_x, cm4_y, cm4_z = symbols('cm4_x cm4_y cm4_z',real=True)
#cm5_x, cm5_y, cm5_z = symbols('cm5_x cm5_y cm5_z',real=True)
#cm6_x, cm6_y, cm6_z = symbols('cm6_x cm6_y cm6_z',real=True)
#cm7_x, cm7_y, cm7_z = symbols('cm7_x cm7_y cm7_z',real=True)

#cm1 = numpy.array([[cm1_x],[cm1_y],[cm1_z]])
#cm2 = numpy.array([[cm2_x],[cm2_y],[cm2_z]])
#cm3 = numpy.array([[cm3_x],[cm3_y],[cm3_z]])
#cm4 = numpy.array([[cm4_x],[cm4_y],[cm4_z]])
#cm5 = numpy.array([[cm5_x],[cm5_y],[cm5_z]])
#cm6 = numpy.array([[cm6_x],[cm6_y],[cm6_z]])
#cm7 = numpy.array([[cm7_x],[cm7_y],[cm7_z]])

#cm = numpy.array([cm1, cm2, cm3, cm4, cm5, cm6, cm7]) 


def forwardKinematics(i,dh_table):
#Perform forward kinematics and return a transformation matrix of given DH parameters
#at ith link

	T = numpy.identity(4)
	#print i
	for j in range (0,i):
		#print "this is loop: ",j+1
		ith_dh_table = dh_table[j]
		theta = ith_dh_table[0]
		d = ith_dh_table[1]
		a = ith_dh_table[2]
		alpha = ith_dh_table[3]
		T_trans = dhTransform(theta,d,a,alpha)
		T = numpy.dot(T,T_trans)
	
	return T

table_ith = forwardKinematics(1,dh_table)
#print table_ith
p = table_ith[0:3,3]
#print p

def forwardPositionKinematics(i,dh_table,cm):
#compute the transformation and position of the center of mass of ith link

	T = numpy.identity(4)
	#print i
	for j in range (0,i):
		#print "this is loop: ",j+1
		ith_dh_table = dh_table[j]
		theta = ith_dh_table[0]
		d = ith_dh_table[1]
		a = ith_dh_table[2]
		alpha = ith_dh_table[3]
		T_trans = dhTransform(theta,d,a,alpha)
		T = numpy.dot(T,T_trans)
	cm_transl = translationMatrix(cm[:,i],'all')
	ith_T_cm = numpy.dot(T,cm_transl)
	P_Ci = ith_T_cm[0:3,3]	
	return P_Ci
	
#P_C2 = forwardPositionKinematics(2,dh_table,cm)
#print P_C2
#print P_C2.shape
