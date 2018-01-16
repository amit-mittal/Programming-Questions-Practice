#include<iostream>
#include<cstdio>
#include<string.h>
#include<string>

using namespace std;

int main()
{
	int test,len,len1,i;
	char s[10000],str[10000];
	
	scanf("%d",&test);
	getchar();
	
	while(test--)
	{
		int time=0;
		len=0;
		gets(s);
		len1=strlen(s);
		
		for(i=0;len<5&&i<len1;++i)
		{
			if(s[i]!='.')
			{
				str[len]=s[i];
				++len;
				if(s[i]=='D'||s[i]=='u'||s[i]=='c'||s[i]=='k'||s[i]=='y')
					++time;
			}
		}
		str[len]='\0';
		
		if(time==5)
			printf("DUCKY IS HERE!\n");
		else
			printf("NO DUCKY!\n");
	}
	
	return 0;
}
