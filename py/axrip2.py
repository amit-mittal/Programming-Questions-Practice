def factorial(n):
	p=1
	while n>0:
		p*=n
		n=n-1
	return p

def value(n):
	mul=1
	p=factorial(n)
	while p>0:
		mul*=n
		p=p-1
		if mul>10:
			mul=mul%10
	return mul

num=raw_input()

while 1:
	if num=='#':
		break
	else:
		s=0
		num=int(num)
		for i in range(num+1):
			s+=value(i)
		s=s%10
		print s
	num=raw_input()
