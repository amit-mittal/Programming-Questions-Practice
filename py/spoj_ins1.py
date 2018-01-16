test=int(raw_input())

while test>0:
	line=raw_input()
	line=line.split()
	a=int(line[0])
	b=int(line[1])
	c=int(line[2])
	
	val=(2**a-1)*(2**b-1)*(2**c)
	
	print val
	
	test=test-1
