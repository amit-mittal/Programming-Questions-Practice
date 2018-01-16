#include<stdio.h>

int main()
{
	long long int test,val,p,count;
	
	scanf("%lld",&test);
	
	while(test--)
	{
		count=0;
		scanf("%lld",&val);
		
		while(val>0)
		{
			p=1;
			while(p<=val)
			{
				p*=4;
			}
			
			if(p>1)
				p/=4;
				
			val-=p;

			++count;
		}
		
		if(count%2==0)
			printf("Thor\n");
		else
			printf("Hulk\n");
	}
	
	return 0;
}
