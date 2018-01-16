#include<stdio.h>

int main()
{
	int t,r,c,i,j;
//	scanf("%d",&t);
	
//	while(t--)
//	{
		long long int a[105][105],max;
	
		scanf("%d %d",&r,&c);
		for(i=0;i<r;++i)
			for(j=0;j<c;++j)
				scanf("%lld",&a[i][j]);
				
		for(i=r-2;i>=0;--i)
		{
			j=0;
			if(j==0)
			{
				if(a[i+1][j]<a[i+1][j+1])
					a[i][j]+=a[i+1][j];
				else
					a[i][j]+=a[i+1][j+1];
			}
			
			for(j=1;j<c-1;++j)
			{
				if(a[i+1][j]<=a[i+1][j+1]&&a[i+1][j]<=a[i+1][j-1])
					a[i][j]+=a[i+1][j];
				else if(a[i+1][j]<=a[i+1][j+1]&&a[i+1][j]>=a[i+1][j-1])
					a[i][j]+=a[i+1][j-1];
				else if(a[i+1][j]>=a[i+1][j+1]&&a[i+1][j]<=a[i+1][j-1])
					a[i][j]+=a[i+1][j+1];
				else if(a[i+1][j]>=a[i+1][j+1]&&a[i+1][j]>=a[i+1][j-1])
				{
					if(a[i+1][j+1]<a[i+1][j-1])
						a[i][j]+=a[i+1][j+1];
					else
						a[i][j]+=a[i+1][j-1];
				}
			}
			
			if(j==c-1)
			{
				if(a[i+1][j]<a[i+1][j-1])
					a[i][j]+=a[i+1][j];
				else
					a[i][j]+=a[i+1][j-1];
			}
		}
		max=a[0][0];
		for(i=1;i<c;++i)
		{
			if(a[0][i]<max)
				max=a[0][i];
		}
		
		printf("%lld\n",max);
//	}
	
	return 0;
}
