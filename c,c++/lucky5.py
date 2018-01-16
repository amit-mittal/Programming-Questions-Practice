test=raw_input()
test=int(test)

while test>0:
	array=[]
	string=str(raw_input())
	array.extend(string.strip())
	four=array.count('4')
	seven=array.count('7')
	print len(array)-four-seven
	test=test-1
