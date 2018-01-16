#include<stdio.h>
#include<string.h>

int main()
{
	scanf("%d",&test);
	
	while(test--)
	{
		while(scanf("%s",string)==1)
		{
			len=strlen(string);
			
			for(i=0;i<len;++i)
			{
				
			}
			
			ch=getchar();
			if(ch=='\n')
				break;
			else
				printf("%c",ch);
		}
		printf("\n");
	}
	
	return 0;
}
