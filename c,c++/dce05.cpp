#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
unsigned long long t,f,n,q;

scanf("%lld",&t);

while(t>0)
	{
	f=0;q=1;
	scanf("%lld",&n);
	while(q<n)
		{
		q=q*2;
		
		}
	printf("%lld\n",q/2);
	--t;
	}

return 0;
}
