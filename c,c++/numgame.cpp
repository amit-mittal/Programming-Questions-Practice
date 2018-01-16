#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int prime(unsigned long int p)
{
unsigned long int i,j,f=0;
j=(unsigned long int)sqrt(p);
if(p>1)
{
for(i=2;i<=j;++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	return p;
else
	return 0;
}
else
	return 0;
}

int main()
{
unsigned long long int t,n,i,f,l;

scanf("%lld",&t);

while(t-->0)
	{
	f=0;
	scanf("%lld",&n);

	while(n!=1)
		{
//		l=prime(n);
		
//		if(a[n]==0)
//		{
		for(i=1;i<=sqrt(n);++i)
			{
			if(n%i==0)
				{
				n=n-i;
				++f;
				break;
				}
			}
//		}
		
//		else
//			{
//			++f;
//			break;
//			}
		}
	if(f%2==1)
		printf("ALICE\n");
	else
		printf("BOB\n");	
	}
return 0;
}
