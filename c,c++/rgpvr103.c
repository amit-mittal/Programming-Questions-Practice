#include<stdio.h>

int main()
{
	int test,num,a,b;

	scanf("%d\n",&test);
	
	while(test--)
	{
		scanf("%d",&num);
		if(num&1)
		{
			num-=1;
			num/=2;
		}
		else
		{
			num/=2;
		}
		
		a=num/2;
		b=num-a;
		
		printf("%d\n",a*b);
	}
	
	return 0;
}
