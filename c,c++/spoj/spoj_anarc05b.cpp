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
	int n1,n2,i,a[10005],b[10005];
	long long int sum;

	scanf("%d",&n1);
	while(n1!=0)
	{
		int a1[20005]={0},b1[20005]={0};
		
		sum=0;
		for(i=0;i<n1;++i)
		{
			scanf("%d",&a[i]);
			a1[a[i]+10000]=1;
		}
		
		scanf("%d",&n2);	
		for(i=0;i<n2;++i)
		{
			scanf("%d",&b[i]);
			b1[b[i]+10000]=1;
		}
			
		for(i=0;i<min(n1,n2);++i)
		{
			if(a1[a[i]+10000]==1&&b1[a[i]+10000]==1)
			{
				
			}
		}
			
		printf("%lld\n",sum);
			
		scanf("%d",&n1);
	}
	
	return 0;
}
