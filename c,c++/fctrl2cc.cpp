#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
unsigned long long int t,p,n;

scanf("%lld",&t);

while(t>0)
	{
	p=1;
	scanf("%lld",&n);
	while(n>1)
		{
		p=p*n;
		--n;
		}
	printf("%lld\n",p);
	--t;
	}

return 0;
}
