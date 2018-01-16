#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	long long int n,p;

	scanf("%lld",&n);
	if(n>=2)
	{
	p=2;
	while(p<n)
		p*=2;
	
	if(p==n)
		printf("TAK\n");
	else
		printf("NIE\n");
	}
	else
		printf("TAK\n");
	return 0;
}
