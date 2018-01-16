import array
import math

n=3
counter=1

def isprime(n):
	f=0
	
	for i in range(int(math.sqrt(n)),2,-1):
		if n%i==0:
			f=1
			return 0
	if f==0:
		#print n
		return 1

while counter<10001:
	if (isprime(n)):
		counter+=1
		print n
	n+=2


