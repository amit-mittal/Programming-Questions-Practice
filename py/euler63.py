count=0

for i in range(1,10):
	j=i
	power=1
	while 1:
		array=[]
		s=j**power
		#print s
		array.extend(str(s))
		
		if len(array)==power:
			count+=1
			power+=1
		else:
			break
			

print count
