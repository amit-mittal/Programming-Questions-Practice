#include<stdio.h>

int main()
{
	int test;
	char string[1100];
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%s",string);
		
		if(string[0]=='1')
			printf("Dexter\n");
		else
			printf("Mandark\n");
	}
	
	return 0;
}
