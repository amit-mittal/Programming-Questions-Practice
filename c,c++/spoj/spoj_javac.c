#include<stdio.h>
#include<string.h>
#include<ctype.h>

void func_c(char string[])
{
	int i,j=0;
	char s[200];
	for(i=0;i<strlen(string);++i)
	{
		if(string[i]=='_')
		{
			++i;
			s[j]=string[i]-32;;
		}
		else
		{
			s[j]=string[i];
		}
		++j;
	}
	s[j]='\0';
	printf("%s\n",s);
}

void func_java(char string[])
{
	int i,j=0;
	char s[200];
	for(i=0;i<strlen(string);++i)
	{
		if(string[i]<=90)
		{
			s[j]='_';
			s[++j]=string[i]+32;
		}
		else
		{
			s[j]=string[i];
		}
		++j;
	}
	s[j]='\0';
	printf("%s\n",s);
}

int main()
{
	int error=0,java,c,i;
	char string[200];

	while(scanf("%s",string)==1)
	{
		error=0;c=0;java=0;
		
		if(string[0]<97||string[strlen(string)-1]=='_')
			error=1;
			
			//to check if java,error or c
		for(i=0;i<strlen(string)&&error!=1;++i)
		{
			if(string[i]=='_')
			{
				if(string[i+1]>=97&&java!=1)
				{
					c=1;
				}
				else
				{
					error=1;
				}
			}
			else if(string[i]<=90)
			{
				if(c!=1)
					java=1;
				else
					error=1;
			}
		}
		
		if(error==1)
			printf("Error!\n");
		else if(c==1&&error!=1&&java!=1)
			func_c(string);
		else if(c!=1&&error!=1&&java==1)
			func_java(string);
		else
			printf("%s\n",string);
		
	}
	return 0;
}
