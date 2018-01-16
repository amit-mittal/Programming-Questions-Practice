#include<stdio.h>

int main()
{
	int test,n;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&n);
		
		if(n%4==0||n%4==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	return 0;
}
