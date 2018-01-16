#include<stdio.h>

int main()
{
	long long s,e,i,j,count=0,max=-1;
	
	while(1)
	{
	scanf("%lld %lld",&s,&e);
	
	for(i=s;i<=e;++i)
	{
		j=i;
		count=1;
		
		while(j!=1)
		{
			if(j%2)
				j=3*j+1;
			else
				j=j>>1;
				
			++count;
		}
		if(count>max)
			max=count;
	}
	printf("%lld %lld %lld\n",s,e,max);
	}	
	return 0;
}
