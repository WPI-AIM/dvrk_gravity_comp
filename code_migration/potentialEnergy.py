#!/usr/bin/env python
import rospy
import numpy

from numpy import *
from forwardKin import forwardKinematics

dh_table = numpy.array([[pi/6,2,3,0],[pi/4,5,10,pi/2],[pi/2,4,1,pi/2],[0,5,3,0]])

def potentialEnergy(dh_table,m,cm,grav_vector):

	n = len(dh_table)
	for i in range (1,n)
		rc = 

