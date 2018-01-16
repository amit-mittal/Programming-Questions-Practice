#include<stdio.h>
#include<string.h>

int main()
{
	int test,i,num;
	char string[10000];

	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%s",string);
		
		for(i=0;i<strlen(string);i+=2)
		{
			num=((string[i]-48)*10)+(string[i+1]-48);
			
//			printf("%d\n",num);
			
			if(num==32)
				printf(" ");
			else if((num<=99)&&(num>=65))
			{
				printf("%c",num);
			}
			else
			{
				num=num*10+(string[i+2]-48);
				++i;
				printf("%c",num);
			}
		}
		
		printf("\n");
		
	}
	
	return 0;
}
