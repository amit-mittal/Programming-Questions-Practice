#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	long long int test,i,r;
	long double ans;
	
	cin>>test;
	
	for(i=1;i<=test;++i)
	{
		cin>>r;
		ans=4*r*r+0.25;
		
		printf("Case %lld: %.2Lf\n",i,ans);
	}
	
	return 0;
}
