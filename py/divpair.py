test=int(raw_input())
	
while test>0:
	total=0;
	line=raw_input()
	line=line.split()
	n=int(line[0])
	m=int(line[1])
		
	num=n/m;
	rem=n%m;
		
	total+=(num*(num-1)/2);
		
	if m%2==1:
		if rem>=m/2:
			count1=num+1;
			time=rem-m/2;
			total+=time*count1*(num+1);
			total+=(m/2-time)*count1*num;
		else:
			count2=num;
			time=rem;
			total+=time*(num+1)*count2;
			total+=(m/2-time)*num*count2;
	else:
		if rem>m/2:
			count1=num+1;
			time=rem-m/2;
			total+=time*count1*(num+1);
			total+=(m/2-time-1)*count1*num;
		elif rem<m/2:
			count2=num;
			time=rem;
			total+=time*(num+1)*count2;
			total+=(m/2-time-1)*num*count2;
		elif rem==m/2:
			count1=num+1;
			total+=(m/2-1)*count1*num;
			total+=(count1*(count1-1)/2);
		
	print total
	test=test-1
