#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cctype>
#include<numeric>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
	int test;
	long long int p,q,s,r,a;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%lld %lld %lld",&p,&q,&s);
		r=sqrt((s+sqrt((s*s)-(4*p*(s-(p*q)))))/(2*(s-(p*q))));
		
		a=p/(r*r);
		
		printf("%lld %lld\n",a,r);
		
	}
	
	return 0;
}
