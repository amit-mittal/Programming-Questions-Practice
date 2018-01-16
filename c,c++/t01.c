#include<stdio.h>
#include<math.h>

int main()
{
	int test,i,j,m,n;
	int a[505][505]={0},b[505][505]={0};
	
	scanf("%d",&m);
	getchar();
	scanf("%d",&n);
	
//	printf("%d %d",m,n);
	
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]<0)
				b[i][j]=1;
			getchar();
		}
	
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
		{
			if(b[i][j]==1)
			{
					if(i>0&&j>0&&b[i-1][j-1]!=1)
						a[i-1][j-1]+=a[i][j];
					if(i>0&&b[i-1][j]!=1)
						a[i-1][j]+=a[i][j];
					if(i>0&&j<n-1&&b[i-1][j+1]!=1)
						a[i-1][j+1]+=a[i][j];
					if(j>0&&b[i][j-1]!=1)
						a[i][j-1]+=a[i][j];
					if(j<n-1&&b[i][j+1]!=1)
						a[i][j+1]+=a[i][j];
					if(i<n-1&&j>0&&b[i+1][j-1]!=1)
						a[i+1][j-1]+=a[i][j];
					if(i<n-1&&b[i+1][j]!=1)	
						a[i+1][j]+=a[i][j];
					if(i<n-1&&j<n-1&&b[i+1][j+1]!=1)
						a[i+1][j+1]+=a[i][j];
			}
		}
/*		
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
			printf("%d ",a[i][j]);
		printf("\n");
	}
*/	
	for(j=n-2;j>=0;--j)
		a[m-1][j]+=a[m-1][j+1];

	for(i=m-1;i--;i>=0)
	{
		for(j=n-1;j--;j>=0)
		{
			if(j==n-1)
			{
				a[i][j]+=a[i+1][j];
			}
			else
			{
				if(a[i][j+1]>=a[i+1][j] && b[i][j+1]!=1)
					a[i][j]+=a[i][j+1];
				else if(a[i][j+1]<a[i+1][j] && b[i+1][j]!=1)
					a[i][j]+=a[i+1][j];
				else if(b[i][j+1]==1)
					a[i][j]+=a[i+1][j];
				else if(b[i+1][j]==1)
					a[i][j]+=a[i][j+1];
				else
					b[i][j]=1;
			}
		}
	}

/*	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	*/
	printf("%d\n",a[0][0]);
	
	return 0;
}
