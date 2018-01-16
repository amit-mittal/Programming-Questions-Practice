#include<stdio.h>

int main()
{
	int test,i,num,index,n,big;
	scanf("%d",&test);
	while(test--)
	{
		int a[2002]={0};
		scanf("%d",&num);
		for(i=0;i<num;++i)
		{
			scanf("%d",&n);
			++a[n+1000];
		}
		big=a[0];
		for(i=1;i<2001;++i)
		{
			if(a[i]>big)
			{
				big=a[i];
				index=i;
			}
		}
		if(big>(int)num/2)
			printf("YES %d\n",index-1000);
		else
			printf("NO\n");
	}	

	return 0;
}
