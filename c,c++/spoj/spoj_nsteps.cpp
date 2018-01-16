#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int test,x,y;
	scanf("%d",&test);

	while(test--)
	{
		scanf("%d",&x);
		scanf("%d",&y);

		if(x==y)
		{
			if(x%2==0)
			{
				printf("%d\n",2*x);
			}
			else
			{
				printf("%d\n",2*x-1);
			}
		}
		else if(x==y+2)
		{
			if(x%2==0)
			{
				printf("%d\n",2*(x-1));
			}
			else
			{
				printf("%d\n",2*x-3);
			}
		}
		else
			printf("No Number\n");
	}

	return 0;
}
