#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int n,m,a[1005]={0},min=0,max=0,ansmax=0,ansmin=0,mac,mic,j,i,b[1005]={0};
	
	scanf("%d %d",&n,&m);
	for(i=0;i<m;++i)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
		
	while(n--)
	{
		max=0;min=1001;
		for(j=0;j<m;++j)
		{
			if(a[j]>=max)
			{
				mac=j;
				max=a[j];
			}
			
			if(b[j]<=min && b[j]>0)
			{
				mic=j;
				min=b[j];
			}
		}		
	//	printf("%d %d %d %d\n",max,mac,min,mic);
		ansmax+=max;
		a[mac]-=1;
		ansmin+=min;
		b[mic]-=1;
	}
	
	printf("%d %d\n",ansmax,ansmin);
		
	return 0;
}
