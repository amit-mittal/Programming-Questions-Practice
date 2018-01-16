def factorial(n)
	p=1
	while(n>0):
		p*=n
		n--
		if p>1000000007:
			p=p%1000000007
	return p

raw_input(test)
test=int(test)

while test>0:
	int array[140]={0};
	scanf("%s",string);
	for(i=0;string[i]!='\0';++i)
	{
		++array[(int)string[i]];
	}
#use dictionary to store the values pf characters and then take factorial
	num=factorial(i);

	for(i=0;i<130;++i)
	{
		if(array[i]>1)
		{
			num=num/factorial(array[i]);
		}
	}	
	printf("%lld\n",num);
	test=test-1

