from math import sqrt

test=int(raw_input())

while test>0:
	line=raw_input()
	line=line.split()
	u=int(line[0])
	v=int(line[1])
	w=int(line[2])
	W=int(line[3])
	V=int(line[4])
	U=int(line[5])

	volume=sqrt(4*u*u*v*v*w*w - u*u*((v*v+w*w-U*U)**2) - v*v*((w*w+u*u-V*V)**2) - w*w*((u*u+v*v-W*W)**2) + (v*v+w*w-U*U)*(w*w+u*u-V*V)*(u*u+v*v-W*W))/12;
	
	print "%.4f" % volume
	
	test=test-1
