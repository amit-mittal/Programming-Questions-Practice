test=int(raw_input())

def gcd(a,b):
	if b==0:
		return a
	else:
		return gcd(b,a%b)

while test>0:
	line=raw_input()
	line=line.split();
	a=int(line[0])
	b=int(line[1])
	if a>b:
		small=b
		big=a
	else:
		small=a
		big=b
	print gcd(small,big)
	test=test-1
