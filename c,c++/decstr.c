#include<stdio.h>
#include<string.h>

int main()
{
	int test,n,i;
	
	scanf("%d",&test);
	
	while(test--)
	{
		int count;
		i=0;
		scanf("%d",&n);
		count=0;
		char c='a';
		char string[200];
		
		while(count<=n)
		{
			string[i]=c;
			++c;
			if(c>'z')
				c=c-26;
			if(c>string[i])
				++count;
			++i;
		}
		if(string[i-1]=='a')
			string[i-1]='\0';
		else
			string[i]='\0';
		
		for(i=strlen(string)-1;i>=0;--i)
			printf("%c",string[i]);
		printf("\n");
	}
	
	return 0;
}
