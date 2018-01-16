#include<stdio.h>

int main()
{
	int t,r,c,i,j;
	scanf("%d",&t);
	
	while(t--)
	{
		int a[22][22];long long int max;
	
		scanf("%d",&r);
		c=3;
		
		for(i=0;i<r;++i)
			for(j=0;j<c;++j)
				scanf("%d",&a[i][j]);
		if(r>2)
		{		
		for(i=r-2;i>=0;--i)
		{
				j=0;
				a[i][0]+=a[i+1][1];
			
				if(a[i+1][0]>a[i+1][2])
					a[i][1]+=a[i+1][2];
				else
					a[i][1]+=a[i+1][0];
				
				a[i][c-1]+=a[i+1][1];

		}
		}
		else
		{
				max=a[1][0];
				for(i=0;i<c;++i)
				{
//					printf("%d ",a[0][i]);
					if(a[1][i]<max)
						max=a[1][i];
				}
				a[0][0]+=max;
				a[0][1]+=max;
				a[0][2]+=max;
		}
		max=a[0][0];
		for(i=0;i<c;++i)
		{
//			printf("%d ",a[0][i]);
			if(a[0][i]<max)
				max=a[0][i];
		}
		
		printf("%lld\n",max);
	}
	
	return 0;
}
