#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
long long int n,l,k,f=0;
scanf("%lld %lld", &n, &k);

while(n>0)
	{
	scanf("%lld",&l);
	if(l%k==0)
		++f;
	--n;
	}
printf("%lld\n",f);
return 0;
}
