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

	
count=1;
n=int(raw_input())
	
for i in range(n/2,n):
	count+=comb(i+1,n-i);
	
print count

