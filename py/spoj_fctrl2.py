test=raw_input()
test=int(test)

def factorial(n):
	p=1
	while n>0:
		p*=n
		n=n-1
	return p

while test>0:
	number=raw_input()
	number=int(number)
	print factorial(number)
	test=test-1
