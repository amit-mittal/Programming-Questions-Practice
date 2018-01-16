#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

void sort(int a[],int b[],int n)
{
	int i,j;
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[j]>a[i])
			{
				swap(a[j],a[i]);
				swap(b[j],b[i]);
			}
			else if(a[j]==a[i]&&b[j]<b[i])
			{
				swap(a[j],a[i]);
				swap(b[j],b[i]);
			}
		}
	}
}

int main()
{
	int i,n,k,a[60],b[60],count=0;

	scanf("%d %d",&n,&k);
	for(i=0;i<n;++i)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	sort(a,b,n);

	for(i=0;i<n;++i)
	{
		if(a[k-1]==a[i]&&b[i]==b[k-1])
			count++;
		if((a[i]<a[k-1])||(a[i]==a[k-1]&&b[i]>b[k-1]))
			break;
	}
	printf("%d\n",count);

	return 0;
}
