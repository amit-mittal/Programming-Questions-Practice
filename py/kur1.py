test=raw_input()
test=int(test)

while test>0:
	line=raw_input()
	array=line.split()
	num=int(array[0])
	power=int(array[1])
	mod=int(array[2])
	s=0

	n1=raw_input()
	n=n1.split()
	s=reduce(lambda x,y:x+y , [int(i) for i in n])

	pro=pow(s,power)

	pro%=mod
	

	#for i in range(power):
	#	pro*=s
	#	if(pro>mod):
	#		pro=pro%mod


	print pro

	test=test-1
