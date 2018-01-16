#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int n,i,a[105],prev;
	long long int sum;

	while(scanf("%d",&n)==1)
	{
		sum=0;
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
			
		sort(a,a+n);
		
//		for(i=0;i<n;++i)
//			printf("%d ",a[i]);
		
		for(i=n-1;i>0;i=n-1)
		{
			sum+=(a[i]*a[i-1]);
			a[i-1]=(a[i]+a[i-1])%100;
			
			for(i=0;i<n;++i)
				printf("%d ",a[i]);
			printf("\n");
			--n;
			sort(a,a+n);
		}
		printf("%lld\n",sum);
	}

	return 0;
}
