#include<stdio.h>
#include<string.h>

int main()
{
	int count,i,num;
	char new[300],string[50];
	
	scanf("%s",string);
	while(strlen(string)>1)
	{
		scanf("%d",&num);
		new[0]='\0';count=0;

		for(i=0;i<=num;++i)
		{
			strcat(new,string);
		}

//		printf("%s",new);

		for(i=0;i<strlen(string);++i)
		{
			count=0;
			while(count<num*strlen(string))
			{
				printf("%c",new[i+count]);
				++count;
			}
			printf("\n");
		}

		scanf("%s",string);
	}

	return 0;
}
