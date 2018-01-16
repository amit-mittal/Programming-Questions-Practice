#include<stdio.h>

int main()
{
	int n,m,a[6][6],i,j;

	scanf("%d %d",&n,&m);

	for(i=0;i<n;++i)
		for(j=0;j<m;++j)
			scanf("%d",&a[i][j]);
			
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;)
		{
			if(a[j++][i]==0)
			{
				if(a[j++][i]==0)
				{
					if(a[j++][i]==0)
					{
						printf("Yes\n");
						return 0;
					}

				}
			}
		}
	}
	
	printf("No\n");
	
	return 0;
}
