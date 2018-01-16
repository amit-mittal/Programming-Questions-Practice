#include<stdio.h>
#include<string.h>

int main()
{
	int test,num,len,i;
	char string[100000],ch;
	
	scanf("%d",&test);
	
	getchar();
	while(test--)
	{
		gets(string);
		len=strlen(string);
		
		for(i=0;i<len-1;)
		{
			num=0;
			while(string[i]>='0'&&string[i]<='9')
			{
				num=(num*10)+string[i]-'0';
				++i;
			}
			if(num>0&&num<=26)
				printf("%c",num+'A'-1);
			else if(num>26)
				printf("%d",num);
			
			if(string[i]==' ')
				++i;
				
			if(string[i]=='#')
			{
				++i;
				num=0;
				while(string[i]>='0'&&string[i]<='9')
				{
					num=(num*10)+string[i]-'0';
					++i;
				}
				printf("%d",num);
			}
			
			if(string[i]=='_')
			{
				printf(" ");
				++i;
			}
			else if(string[i]!='_'&&string[i]!='#'&&string[i]!=' '&&(string[i]>'9'||string[i]<'0'))
			{
				printf("%c",string[i]);
				++i;
			}
		}
		printf("\n");
	}
	
	return 0;
}
