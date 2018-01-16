#include<stdio.h>
#include<math.h>

int prime(unsigned long int p)
{
unsigned long int i,j,f=0;
j=(unsigned long int)sqrt(p);
if(p>1)
{
for(i=2;i<=j;++i)
	{
	if(p%i==0)
		{
		return 0;
		}
	}
	return 1;
}
else
	return 0;
}

int main()
{
	int test,num,count,i,array[1000000]={1},p;
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&num);
		if(!prime(num)){
		for(i=2;i<=sqrt(num);++i)
		{
			if((num%i==0)&&(prime(i)))
				num=num*(i-1)/i;
		}
		printf("%d\n",num);}
		else
			printf("%d\n",num-1);
	}
	return 0;
}
