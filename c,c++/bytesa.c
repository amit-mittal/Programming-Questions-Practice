#include<stdio.h>
#include<string.h>
#include<ctype.h>  

int main()
{
	int i,k,white,count;
	char string[65]={0};
	gets(string);
	
	while(strcmp(string,"END")!=0)
	{
		i=0;int array[150]={0};
		k=0;count=0;

		while(string[i]!='\0')
		{
			if(isalpha(string[i]))
			{
				++array[(int)string[i]];
				++count;
			}
			++i;
		}
		
		for(i=64;i<130;++i)
		{
			if(array[i]==1)
				++k;
		}

		if(k==count)
			printf("%s\n",string);
	
		gets(string);
	}
	
	return 0;
}
