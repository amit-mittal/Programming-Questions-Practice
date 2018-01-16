#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
#define MOD 1000000007
using namespace std;

int main()
{
	int test,n,i;
	scanf("%d",&test);
	
	while(test--)
	{
		long long int p=1;
		
		scanf("%d",&n);
		
		for(i=0;i<n-1;++i)
		{
			p*=n;
			if(p>=MOD)
				p=p%MOD;
		}
		printf("%lld\n",p);
	}
	
	return 0;
}
