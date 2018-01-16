#include<stdio.h>

int max(int a[][],n)
{
	if(n==1)return;
	else
	{
		
	}
}

int main()
{
	int t,n,i,j,a[101][101];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;++i)
		{j=0;
			while(j<=i)
			{
				scanf("%d",a[i][j]);
				++j;
			}
		}
	}
	return 0;
}
