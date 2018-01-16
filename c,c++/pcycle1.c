#include<stdio.h>

int main()
{
	int n,a[1005],i,j,count=0,b[1005]={1},start;

	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
		scanf("%d",&a[i]);
	
	for(i=1;i<=n;++i)
	{
		start=i;
		printf("%d\n",start);
		if(b[start]!=0)
		{
			printf("hi\n");
			b[i]=0;
			printf("%d %d ",i,a[i]);
			i=a[i];
		}
		while(i!=start)
		{
			b[i]=0;
			printf("%d %d ",i,a[i]);
			i=a[i];
			++count;
		}
		printf("\n");
	}
	
	printf("%d\n",count);
	
	return 0;
}
