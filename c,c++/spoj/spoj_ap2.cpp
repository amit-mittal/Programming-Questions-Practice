#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int t;
	long long int a,b,sum,n,d,first;

	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%lld %lld %lld",&a,&b,&sum);
		
		n=(2*sum)/(a+b);
		printf("%lld\n",n);
		
		d=(b-a)/(n-5);
		
		first=a-(2*d);
		while(n--)
		{
			printf("%lld ",first);
			first+=d;
		}
		printf("\n");
	}
	
	return 0;
}
