#include<stdio.h>

int main()
{
	int test,i,f;
	char string[100];

	scanf("%d",&test);

	while(test--)
	{
		scanf("%s",string);
		i=0;f=0;

		while(string[i]!='\0')
		{
			if(string[i]=='D')
			{
				f=1;
				break;
			}
			++i;
		}

		if(f==0)
			printf("Possible\n");
		else
			printf("You shall not pass!\n");
	}

	return 0;
}
