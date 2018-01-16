#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int gcd(int first, int second)
{
	int temp;
	while(first>0)
	{
		temp=first;
		first=second%first;
		second=temp;
	}
	return second;
}

int main()
{
	int test,i,j;
	
	scanf("%d\n",&test);
	
	while(test--)
	{
		int a[55]={0},l[55],n;
		
		scanf("%d",&n);
		
		for(i=0;i<n;++i)
		{
			scanf("%d",&a[i]);
			l[i]=a[i];
		}	
		int min,min1;	
			
		sort(l,l+n);
//		printf("%d %d\n",min,min1);
		
		int hcf=gcd(l[0],l[1]);
		int count=0;
		
		for(i=2;i<n&&hcf>1;++i)
		{
			hcf=gcd(hcf,l[i]);
		}
		
		for(i=0;i<n;++i)
			printf("%d ",a[i]/hcf);
			
		printf("\n");
	}
	
	return 0;
}
