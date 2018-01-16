#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	int test;
	long long int a,b,sum,temp,first,diff,n;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%lld %lld %lld",&a,&b,&sum);
		
		temp=(7*b)+(9*a)+sum;
		n=(temp+sqrt((temp*temp)-(48*sum*(a+b))))/(2*(a+b));
		
		first=((n*a)-2*(a+b))/(n-6);
		diff=(b-a)/(n-6);
		
		printf("%lld\n",n);
/*		while(n--)
		{
			printf("%lld ",first);
			first+=diff;
		}
*/		printf("\n");
	}
	
	return 0;
}
