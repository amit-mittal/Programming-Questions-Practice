test=raw_input()
test=int(test)

while test>0:
	line=raw_input()
	lines=line.split()
	num1=int(lines[0])
	num2=int(lines[1])
	print str(int(str(num1)[::-1])+int(str(num2)[::-1])).strip('0')[::-1]
	test-=1
