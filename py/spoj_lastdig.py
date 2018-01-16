import psyco
psyco.full()

test=int(raw_input())

while test>0:
	line=raw_input();
	line=line.split()
	a=int(line[0])
	b=int(line[1])

	print str(a**b)[-1:]
	test=test-1
