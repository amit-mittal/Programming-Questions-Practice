#include<stdio.h>

int count=0;
int a[5001][5001]={0};

int path(int i,int j)
{
	if(i<0||j<0||a[i][j]==1)
		return;
	else if((i==0)&&(j==0))
		++count;
	else
	{
		path(i-1,j);
		path(i,j-1);
	}
}

int main()
{
	int m,n,k,i,a1,a2;

	scanf("%d %d %d",&m,&n,&k);
	
	for(i=0;i<k;++i)
	{
		scanf("%d %d",&a1,&a2);
		a[a1-1][a2-1]=1;
	}	
	
	path(m-1,n-1);
	
	printf("%d\n",count);
	
	return 0;
}
