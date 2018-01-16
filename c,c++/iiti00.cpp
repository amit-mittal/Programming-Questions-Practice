#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int n,q,k,l,i,a[106],j;
	int sum=0;
	l=n-k;
	
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
		
	i=n-1;
	while(a[i]>=0&&i>=0)
	{
		if(k>0)
		{
			sum=sum+fabs(a[i]);
			--k;
		}
		else
		{
			sum=sum-fabs(a[i]);
			--l;
		}
		
		--i;
	}
	
	for(j=0;j<=i;++j)
	{
		if(l>0)
		{
			sum=sum+fabs(a[j]);
			--l;
		}
		else
		{
			sum=sum-fabs(a[j]);
			--k;
		}
	}
	
	printf("%d\n",sum);
	
	return 0;
}
