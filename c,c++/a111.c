#include<stdio.h>
#include<math.h>

int main()
{
	int test,winner;
	int a,b,max=-1;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %d",&a,&b);
		
		if(abs(a-b)>max)
		{
			if(a-b>max)
			{
				winner=1;
				max=a-b;
			}
			else
			{
				winner=2;
				max=b-a;
			}
		}
	}
	printf("%d %d\n",winner,max);
	
	return 0;
}
