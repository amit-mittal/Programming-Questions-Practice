import math

def divisors(n):
	div=2
	for i in range(2,int(math.sqrt(n))):
		if n%i==0:
			div+=2
	return div

i=1
j=1

while 1:
	if divisors(i)>=500:
		print i
		break
	else:
		j+=1
		i+=j
