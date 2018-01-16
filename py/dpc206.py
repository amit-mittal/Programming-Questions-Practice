test=int(raw_input())

while test>0:
	num=raw_input()
	count=0
	while num!=num[::-1]:
		num=str(int(num)+int(num[::-1]))
		count+=1
	print count,num
	test=test-1
