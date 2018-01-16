import math

def isprime(n):
	f=0
	for i in range(2,int(math.sqrt(n))+1):
		if n%i==0:
			f=1
			return 0
	if f==0:
		return 1

sum=0

for prime in range(3,2000000,2):
	if isprime(prime):
		sum+=prime

print sum
