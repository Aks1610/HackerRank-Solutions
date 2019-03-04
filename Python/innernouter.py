import numpy

a = numpy.array([input().split()], int) 
b = numpy.array([input().split()], int) 
print (numpy.inner(a,b)[0,0],(numpy.outer(a,b)), sep='\n')
