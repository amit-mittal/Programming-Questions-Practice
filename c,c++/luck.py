test=raw_input()
test=int(test)

while test>0:
	total=0
	count=0
	f=open("num.txt",'w')
	print>>f, raw_input()
	f.close()
	f=open("num.txt",'r')
	line=f.read()
	for i in line:
		if i=='4' or i=='7':
			count+=1
		total+=1
	print total-count-1
	f.close()
	test=test-1
