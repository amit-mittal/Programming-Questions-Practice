#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
	int test,n,k,i,j,a[20005],min,diff;

	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %d",&n,&k);
		
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
			
		sort(a,a+n);
		
		min=a[n-1]-a[0];
		for(i=0;i<=n-k;++i)
		{
			diff=a[i+k-1]-a[i];
			if(diff<min)
				min=diff;
		}
		printf("%d\n",min);
		
	}
	
	return 0;
}
