#!/usr/bin/env python

import numpy as np
import sympy
import scipy
import numdifftools as nd

from numpy import *
from sympy import *
from numdifftools import *

pi = math.pi

#**** Incomplete code: Work in progress



def jacobian(f,v):
	n = len(f)
	m = len(v)
	if isinstance(v,list) == True:
		j_v = np.zeros((3,n))		
		for i in range (0,n):
			for j in range (0,m):
				j_v[]
	
	else:
		j_v = np.zeros((3,n))
		for i in range (0,n):
			j_v[i] = diff(f,v) 
				
	
	

def angularJacobian(i,dh_table,rho):
	n = len(dh_table)
	J_w = numpy.zeros((3,i))
	for k in range (0,i):
		T = numpy.identity(4)
		for j in range (0,i):
			theta = dh_table[j,0]
			d = dh_table[j,1]
			a = dh_table[j,2]
			alpha = dh_table[j,3]
			dhTrans_i = dhTransform(theta,d,a,alpha) 
			T = numpy.dot(T,dhTrans_i)
			#print "T", j+1
			#print T
		#print T
		#print T[0:3,3]
		#print rho[0:4]
		J_w[:,k] = numpy.dot(rho[k],T[0:3,3])
		#J_w[:,k] = numpy.transpose(J_w[:,k])
	return J_w
	
#Testing
#angJ_1 = angularJacobian(1,dh_table,rho)
#angJ_2 = angularJacobian(2,dh_table,rho)
angJ_3 = angularJacobian(3,dh_table,rho)
#angJ_4 = angularJacobian(4,dh_table,rho)
#print angJ_1
#print angJ_2
#print angJ_3
#print angJ_4

def linearJacobian(i,dh_table):
	n = len(dh_table)
	J_v = numpy.zeros((3,i))
	
	for k in range (0,i):
		T = numpy.identity(4)
		for j in range (0,i):
			theta = dh_table[j,0]
			d = dh_table[j,1]
			a = dh_table[j,2]
			alpha = dh_table[j,3]
			dhTrans_i = dhTransform(theta,d,a,alpha)
			T = numpy.dot(T,dhTrans_i)
		p_i = T[0:3,3].reshape((3,1))
		R_i = T[0:3,0:3]
		k = numpy.array([[0],[0],[1]])
		z_i = numpy.dot(R_i,k)
		#print "p_i"
		#print p_i
		print "z_i"
		print z_i, z_i.shape
		#return p_i,z_i
		
		T_n = numpy.identity(4)
		for l in range (0,n):
			theta = dh_table[l,0]
			d = dh_table[l,1]
			a = dh_table[l,2]
			alpha = dh_table[l,3]
			dhTrans_n = dhTransform(theta,d,a,alpha)
			T_n = numpy.dot(T_n,dhTrans_n)
		#print "T_n"
		#print T_n
		p_n = T_n[0:3,3].reshape((3,1))
		#print "p_n"
		#print p_n	
		r_i = p_n - p_i
		print "r_i"
		print r_i, r_i.shape
		J_v[:,k] = numpy.cross(z_i,r_i)
		return p_n, r_i#, J_v[:,k]
		
	return J_v
	
linJ_4 = linearJacobian(2,dh_table)
#print linJ_4
