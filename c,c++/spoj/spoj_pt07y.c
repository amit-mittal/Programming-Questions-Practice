#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m,**a,f=0,i,j,row,col;

	scanf("%d %d",&n,&m);
	if(m==n-1)
	{
		a=malloc((n+1)*sizeof(int *));
		for(i=0;i<n+1;++i)
			a[i]=calloc(n+1,sizeof(int));

		for(i=0;i<m;++i)
		{
			scanf("%d %d",&row,&col);
			++a[row][col];++a[col][row];
		}

		for(i=1;i<=n;++i)		
		{
			for(j=1;j<=n;++j)
			{
				if(a[i][j]>1)
				{
					printf("NO\n");
					return 0;
				}
				else if(a[i][j]==1)
				{
					++f;
				}
			}
		}
	//	printf("f=%d\n",f);
		if(f>n)
			printf("YES\n");
		else
			printf("NO\n");

		for(i=0;i<n+1;++i)
		{
			free(a[i]);
		}
		free(a);
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
