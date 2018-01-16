#include<stdio.h>

int main()
{
	long long int test,a,b,c;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("%lld\n",a*a-2*b);
	}
	
	return 0;
}
