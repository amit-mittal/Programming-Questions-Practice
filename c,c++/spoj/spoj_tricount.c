#include<stdio.h>

int main()
{
	long long int test,sum,j,num,i;
	scanf("%lld",&test);
	while(test--)
	{
		sum=0;
		scanf("%lld",&num);
		sum=(num)*(2*num+1)*(num+2)/8;
		
		printf("%lld\n",sum);
	}
}
