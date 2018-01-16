#include<iostream>
#include<stdio.h>

using namespace std;

unsigned long long int reverse(unsigned long long int n)
{
unsigned long long int q,s,r;
q=n;s=0;

while(q>0)
	{
	r=q%10;
	s=10*s+r;
	q=q/10;
	}

return s;
}

int main()
{
unsigned long long int j,n,i,l,r,s=0;
scanf("%lld",&n);

for(i=0;i<n;++i)
	{
	s=0;
	for(j=0;j<2;++j)
		{
		scanf("%lld",&l);
		r=reverse(l);
		s=s+r;
		}
	printf("%lld\n",reverse(s));
	}


return 0;
}
