#!/usr/bin/env python
import rospy
import numpy
#import sympy

from numpy import *
#from sympy import *

pi = math.pi


def dhTransform(theta,d,a,alpha):

	T = numpy.dot(numpy.dot(rotationMatrix(theta,'z'),translationMatrix(d,'z')),numpy.dot(translationMatrix(a,'x'),rotationMatrix(alpha,'x')))
	for r in range (0,4):
		for c in range (0,4):
			if abs(T[r,c]) < 1e-4:
				T[r,c] = 0
				
	return T


def translationMatrix(d,t_ax):
	
	if t_ax == 'x':
		T = numpy.array([[1,0,0,d],[0,1,0,0],[0,0,1,0],[0,0,0,1]])

	elif t_ax == 'y':
		T = numpy.array([[1,0,0,0],[0,1,0,d],[0,0,1,0],[0,0,0,1]])

	elif t_ax == 'z':
		T = numpy.array([[1,0,0,0],[0,1,0,0],[0,0,1,d],[0,0,0,1]])

	elif t_ax == 'all':
		T = numpy.array([[1,0,0,d[0]],[0,1,0,d[1]],[0,0,1,d[2]],[0,0,0,1]])	

	else:
		print('invalid axis')

	return	T


def rotationMatrix(theta,r_ax):
	
	if r_ax == 'x':
		R = numpy.array([[1,0,0,0],[0,math.cos(theta),-math.sin(theta),0],[0,math.sin(theta),math.cos(theta),0],[0,0,0,1]])
	
	elif r_ax == 'y':
		R = numpy.array([[math.cos(theta),0,math.sin(theta),0],[0,1,0,0],[-math.sin(theta),0,math.cos(theta),0],[0,0,0,1]])
	
	elif r_ax == 'z':
		R = numpy.array([[math.cos(theta),-math.sin(theta),0,0],[math.sin(theta),math.cos(theta),0,0],[0,0,1,0],[0,0,0,1]])
	else:
		print('invalid axis')
		
	return R

#theta = pi/6
#d = 2
#a = 3
#alpha = 0

#dh_test = dhTransform(theta,d,a,alpha)
#print dh_test
#print dh_test[1,1]
