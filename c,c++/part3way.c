#include<stdio.h>

int max(int a,int b,int c)
{
	int large;
	if(a>b)
		large=a;
	else
		large=b;
		
	if(c>large)
		return c;
	else
		return large;
}

int sum(int a[],int s,int e)
{
	int i,sum=0;
	for(i=s;i<=e;++i)
		sum+=a[i];
	return sum;
}

int main()
{
	int n,a[5005]={0},i,j,k,sum1,sum2,sum3,max1,min=100000000;
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
		
	for(i=0;i<n-2;++i)
	{
		for(j=i+1;j<n-1;++j)
		{
			for(k=j+1;k<n;++k)
			{
				sum1=sum(a,i,j-1);
				sum2=sum(a,j,k-1);
				sum3=sum(a,k,n-1);
				
				max1=max(sum1,sum2,sum3);
				
//					printf("%d %d %d\n",i,j,k);
//					printf("%d\n",max1);
				
				if(max1<min)
					{
//					printf("%d %d %d\n",i,j,k);
//					printf("%d\n",max1);
					min=max1;
					}
			}
		}
	}
	
	printf("%d\n",min);
	
	return 0;
}
