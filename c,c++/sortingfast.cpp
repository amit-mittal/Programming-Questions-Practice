#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
unsigned long long int a[1000000]={0};
unsigned long long int i,l,t;

scanf("%lld",&t);


for(i=0;i<t;++i)
	{
	scanf("%lld",&l);
	++a[l];
	}

for(i=0;i<1000000;++i)
	{
	if(a[i]>0)
		{
		while(a[i]>0)
			{
		printf("%lld\n",i);
			--a[i];
			}
		}
	}

return 0;
}
