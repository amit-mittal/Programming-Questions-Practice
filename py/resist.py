def gcd(x,y):
	if(y==0):
		return x;
	else:
		return gcd(y,x%y);

test=int(raw_input())
	
while test>0:
	line=raw_input()
	line=line.split()
	
	n=int(line[0])
	m=int(line[1])
	
	num=1;den=1;
	for i in range(1,n):
		num1=num+den;
		den1=num+(2*den);

		if((num1>m or den1>m)):
			if(num1%m!=0):
				num1=num1%m;
			if(den1%m!=0):
				den1=den1%m;

		num=num1;
		den=den1;		
		
	hcf=gcd(num,den);
		
	num=num/hcf;
	den/=hcf;
		
	num=num%m;
	den=den%m;
	
	test=test-1;
	
	print "%d/%d" % (num,den)
#	print '{0}/{1}'.format(num,den)
