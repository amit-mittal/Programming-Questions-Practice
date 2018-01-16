#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int num,i,k,a[5002],b[5002],j,val,min,sum,max=0;

	scanf("%d",&num);
	
	for(i=0;i<num;++i)
	{
		scanf("%d %d",&a[i],&b[i]);
		
		for(j=i-1;j>=0;--j)
		{
		}
	}
	
/*	for(i=0;i<=num-1;++i)
	{
		
		for(j=i+1;j<=num;++j)
		{
			sum=0;
			for(k=i;k<j;++k)
			{
				sum+=a[k];
			}
			min=*min_element(b+i,b+j);
//			printf("%d %d %d %d\n",i,j,min,sum);
			val=min*sum;
			if(val>max)
//			{
				max=val;
			//	printf("%d %d %d %d\n",i,j,min,sum);
//			}
		}
	}
*/	
	printf("%d\n",max);
	
	return 0;
}
