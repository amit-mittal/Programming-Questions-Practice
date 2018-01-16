#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int n,i,j,sum,a[20005],k,max=-100;
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
		
	for(i=1;i<=n/2;++i)
	{
		sum=0;
		if(n%i==0)
		{
			for(j=0;j<i;++j)
			{
				int count=0;
				sum=0;
				k=j;
				while(k<n)
				{
					++count;
					sum+=a[k];
					k+=i;
				}
				if(sum>max&&count>2)
					max=sum;
			}
		//	printf("%d %d\n",i,sum);
		}
	}
	
	printf("%d\n",max);
	
	return 0;
}
