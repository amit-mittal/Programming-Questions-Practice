#include<stdio.h>

int max1(int a,int b,int c)
{
	int large;
	if(a>b)
		large=a;
	else
		large=b;
		
	if(c>large)
		return c;
	else
		return large;
}

int max2(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	int r,c,i,j,a[105][105]={0},l;

	scanf("%d %d",&r,&c);
	
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
			scanf("%d",&a[i][j]);
	}
	i=c-2;
	for()
	
	for(i=c-2;i>=0;--i)
	{
		for(j=r-1;j>=0;--j)
		{
			if(j==r-1)
				a[j][i]+=max2(a[j][i+1],a[j-1][i+1]);
			else if(j==0)
				a[j][i]+=max2(a[j][i+1],a[j+1][i+1]);
			else if(j!=r-1&&j!=0)
				a[j][i]+=max1(a[j][i+1],a[j+1][i+1],a[j-1][i+1]);
		}
	}
	
	printf("%d\n",a[0][0]);
	
	return 0;
}
