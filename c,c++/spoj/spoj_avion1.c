#include<stdio.h>
#include<string.h>

int main()
{
	char string[15];
	int i,count,c=0;

	for(i=1;i<6;++i)
	{
		scanf("%s",string);
		if(strstr(string,"FBI")!=NULL)
		{
			c=1;
			printf("%d ",i);
		}
	}
	
	if(c==0)
		printf("HE GOT AWAY!\n");
	return 0;
}
