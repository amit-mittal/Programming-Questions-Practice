n=-1
d=-1

while n!=0 or d!=0:
	line=raw_input()
	line=line.split()
	n=int(line[0])
	d=int(line[1])
	if n!=0 or d!=0:
		print n**d
