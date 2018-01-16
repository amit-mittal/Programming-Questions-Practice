#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int n,i,j,a[50005],q,x,y;
	long long int sum;
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
		
	scanf("%d",&q);
	
	while(q--)
	{
		scanf("%d %d",&x,&y);
		
		sort(a+x-1,a+y);
	
		sum=a[y-1];		
		for(i=y-2;i>=0&&a[i]>0;--i)
		{
			sum+=a[i];
		}
		
		printf("%lld\n",sum);
	}
	
	return 0;
}
