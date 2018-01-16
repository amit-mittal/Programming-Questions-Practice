#include<stdio.h>

int main()
{
	int test,sum=0;
	long long int num;
	
	scanf("%d",&test);
	
	while(test--)
	{
		sum=0;
		scanf("%lld",&num);
		while(num>0)
		{
			sum+=num%2;
			num/=2;
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
