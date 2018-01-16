#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	int t,n,m,x,y,i,j,k,c;
	scanf("%d",&t);
	
	while(t--)
	{
		long long int count=0;
		int a[501][501]={0};
		scanf("%d %d",&n,&m);
		
		for(i=0;i<m;++i)
		{
			scanf("%d %d",&x,&y);
			a[x][y]=a[y][x]=1;
		}
/*		
		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
*/		
		for(i=0;i<n-1;++i)
		{
			for(j=i+1;j<n;++j)
			{
				c=0;
				for(k=0;k<n;++k)
				{
					if(a[i][k]!=a[k][j]&&k!=i&&k!=j)
					{
						c=1;
						break;
					}
				}
				if(c==0&&i!=j)
				{
//					printf("%d %d\n",i,j);
					count++;
				}
			}
		}
			
		printf("%lld\n",count);
			
	
	}

	return 0;
}
