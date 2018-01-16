#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int n1,n2,n3,k,x[100000],i,j,a[50001],b[50001],c[50001],y[50001],count;
	scanf("%d %d %d",&n1,&n2,&n3);

	for(i=0;i<n1;++i)
		scanf("%d",&a[i]);
		
	for(i=0;i<n2;++i)
		scanf("%d",&b[i]);
		
	for(i=0;i<n3;++i)
		scanf("%d",&c[i]);
	
	i=0;j=0;k=0;
	
	while(i<n1||j<n2)
	{
		if(a[i]>b[j])
		{
			x[k]=b[j];
			++j;
		}
		else if(a[i]<b[i])
		{
			x[k]=a[i];
			++i;
		}
		else
		{
			x[k]=a[i];
			++i;
			++j;
		}
		++k;
	}
	
	//for(i=0;i<k;++i)
	//{
	//	printf("%d ",x[i]);
//	}
	
	int l=0;
	i=0;j=0;count=0;
	
	while(i<n3||j<k)
	{
		if(c[i]==x[j])
		{
			++count;
			y[l]=c[i];
			++i;++j;
			++l;
//			printf("%d %d ",l,y[l]);
		}
		else if(c[i]>x[j])
			++j;
		else if(c[i]<x[j])
			++i;
	}
	
	printf("%d\n",count);
	for(i=0;i<l;++i)
	{
		printf("%d\n",y[i]);
	}

	return 0;
}
