#include<stdio.h>
#include<string.h>

int main()
{
	char string[100],sub[100];
	
	gets(string);
	gets(sub);
	
	if(strstr(string,sub)!=NULL)
		printf("Y\n");
	else
		printf("N\n");
	
	return 0;
}
