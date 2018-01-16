test=int(raw_input())

v=1000000007

def comb(n,k):
	i=1
	p=1
	if(k>n-k):
		k=n-k;
			
	for i in range(1,k+1):
		p*=n
		n=n-1
		p/=i
	return p
	

while test>0:
	a=int(raw_input())
	val=0
	
	for i in range(1,a+1):
		val+=((((comb(a,i)%v)**2)%v)*i)%v
	
	print val
	
	test=test-1
