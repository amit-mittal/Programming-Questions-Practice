#include<stdio.h>

int main()
{
	int t,n;
	unsigned long long int a;
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d",&n);
		a=n*(n+1)*(n+2)/2;
		printf("%lld\n",a);
	}
	
	return 0;
}
