#include<stdio.h>

int main()
{
	int test,n,i,j;
	
	while(test--)
	{
		int a[100][100]={0},b[100][100]={0};
		scanf("%d",&n);
		for(i=0;i<n;++i)
			for(j=0;j<n;++j)
				scanf("%d",&a[i][j]);
				
		for(i=0;i<n;++i)
			for(j=0;j<n;++j)
				scanf("%d",&b[i][j]);
		
		for(i=0;i<n;++i)
			printf("%d ",i+1);

		printf("\n");

		for(i=0;i<n;++i)
			printf("%d ",i+1);
				
		printf("\n");
	}
	
	return 0;
}
