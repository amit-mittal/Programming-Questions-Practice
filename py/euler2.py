result = 2
fib1=2
fib2=1

while fib1<4000000:
	fib=fib1+fib2
	if fib%2==0:
		result = result + fib
	fib2=fib1
	fib1=fib
	
print str(result)
