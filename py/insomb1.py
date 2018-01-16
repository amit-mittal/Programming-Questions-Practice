from math import sqrt

f=0

a=int(raw_input())

for i in range(2,int(sqrt(a))+1):
	if a%i==0:
		f=1;
		print "COMPOSITE"
		break
	
if f==0:
	print "PRIME"
