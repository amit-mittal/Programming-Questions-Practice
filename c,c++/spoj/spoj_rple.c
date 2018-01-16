#include<stdio.h>

int main()
{
	int test,i,j,n,r,x,y;
	
	scanf("%d",&test);
	
	for(j=0;j<test;++j)
	{
		int spy=1;
		int a[1005]={0},b[1005]={0};
		
		scanf("%d%d",&n,&r);
		
		for(i=0;i<r;++i)
		{
			scanf("%d%d",&x,&y);
			a[x]=1;
			b[y]=1;
		}
		
		for(i=0;i<n;++i)
		{
			if(a[i]==1&&b[i]==1)
			{
				spy=0;
				break;
			}
		}
		
		if(0==spy)
			printf("Scenario #%d: spied\n",j+1);
		else
			printf("Scenario #%d: spying\n",j+1);
	}
	
	return 0;
}
