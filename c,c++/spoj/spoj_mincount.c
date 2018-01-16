#include<stdio.h>

int main()
{
	long long int test,num,i,sum,a;
	scanf("%lld",&test);
	while(test--)
	{
		sum=0;
		scanf("%lld",&num);
		if(num==0)
		{
			printf("0\n");
		}
		else if(num==1)
		{
			printf("0\n");
		}
		else
		{
			printf("%lld\n",(long long int)(num*(num+1)/6));
		}
	}

	return 0;
}
