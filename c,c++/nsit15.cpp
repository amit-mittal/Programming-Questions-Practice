#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
unsigned long long int n,t,l,c,f,q,i,r;

scanf("%lld",&t);

while(t-->0)
	{
	c=0;i=1;
	scanf("%lld %lld",&n,&l);
	while(c!=n)
		{
		q=i;
		f=0;
		while(q>0)
			{
			r=q%10;
			if(r==l)
				{
				++f;break;
				}
			q=q/10;
			}
		if(f==0)
			++c;
		++i;
		}
	printf("%lld\n",--i);
	}
return 0;
}
