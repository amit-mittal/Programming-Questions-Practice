#include<stdio.h>

int main()
{
	int test,num;

	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&num);
		if(num&1)
		{
			printf("%d\n",num-1);
		}
		else
		{
			printf("%d\n",num);
		}
	}
	
}
