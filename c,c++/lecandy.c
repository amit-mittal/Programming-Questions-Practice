#include<stdio.h>

int main()
{
	int test,sum,e,c,a;
	
	scanf("%d",&test);
	
	while(test--)
	{
		sum=0;
		scanf("%d %d",&e,&c);
		
		while(e--)
		{
			scanf("%d",&a);
			sum+=a;
		}
		
		if(sum>c)
			printf("No\n");
		else
			printf("Yes\n");
	}
	
	return 0;
}
