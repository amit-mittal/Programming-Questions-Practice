#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	unsigned long long int test,num,sum,p;

	scanf("%lld",&test);
	
	while(test--)
	{
		sum=0;p=5;
		scanf("%lld",&num);
		while(p<=num)
		{
			sum+=(num/p);
			p*=5;
		}
		printf("%lld\n",sum);
	}

	return 0;
}
