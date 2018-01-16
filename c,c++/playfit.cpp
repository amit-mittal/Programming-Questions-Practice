#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
	int n,test,min,diff;
	scanf("%d",&test);
	
	while(test--)
	{
		int a[100005],i,j,max=-2;
		scanf("%d",&n);
		
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
			
		min=a[0];
		for(i=1;i<n;++i)
		{
			if(a[i]<=min)
				min=a[i];
			else
			{
				diff=a[i]-min;
				if(diff>max)
					max=diff;
			}		
		}
		if(max<=0)
			printf("UNFIT\n");
		else
			printf("%d\n",max);
	}

	return 0;
}
