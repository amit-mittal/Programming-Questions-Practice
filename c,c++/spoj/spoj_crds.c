#include<stdio.h>

int main()
{
	unsigned long long int test,sum,num,i;
	scanf("%lld",&test);

	while(test--)
	{
		sum=0;
		scanf("%lld",&num);
		sum=3*num*(num-1)/2;

		sum+=(2*num);
		sum=sum%1000007;
		printf("%lld\n",sum);
	}

	return 0;
}
