#include<stdio.h>

int main()
{
	int test,n,a[100005]={0},k,min=100005,max=0,i,count;

	scanf("%d %d",&test,&k);
	
	while(test--)
	{
		count=0;
		scanf("%d",&n);
		
		if(n==-1)
		{
			for(i=min;i<=max;++i)
			{
				if(a[i]>0)
					count+=a[i];
					
				if(count>k||count==k)
				{
					printf("%d\n",i);
					break;
				}
			}
		}
		else
		{
			a[n]++;
			if(n>max)
				max=n;
			else if(n<min)
				min=n;
		}
	}
	
	return 0;
}
