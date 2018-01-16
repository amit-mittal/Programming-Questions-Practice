import psyco
psyco.full()
import sys

test=int(raw_input())

num_large=0
den_large=0

while test>0:
	line=raw_input()
	line=line.split()
	a=int(line[0])
	b=int(line[1])
	
	if den_large*a>=num_large*b:
		num_large=a
		den_large=b
	
	test=test-1
	
	for i in range(2,min(num_large,den_large)):
		if num_large%i==0 and den_large%i==0:
			num_large=num_large/i
			den_large=den_large/i
	
print '{0} {1}'.format(num_large,den_large)
sys.exit(0)
