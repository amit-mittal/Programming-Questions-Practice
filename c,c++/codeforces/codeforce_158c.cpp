#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int test,i,j=1,k,q;
	char string1[240],string2[10000];
	scanf("%d",&test);
	
	getchar();
	
	string2[0]='/';string2[1]='\0';
	
	while(test--)
	{
		scanf("%s",string1);
//		gets(string1);
		if(string1[0]=='p')
		{
			printf("%s\n",string2);
		}
		else
		{
			scanf("%s",string1);
			if(string1[0]=='/')
			{
				j=1;
				string2[0]='/';string2[1]='\0';
				i=1;
			}
			else
				i=0;
				
			while(i<strlen(string1))
			{
				if(string1[i]=='.')
				{
					if(string1[i+1]=='.')
					{
						int count=0;
						while(string2[j]!='/'||count<2)
						{
							++count;
							--j;
						}
					}
				}
				else
				{
					string2[j++]=string1[i];
				}
				++i;
			}
			if(string2[j-1]!='/')
			{
				string2[j++]='/';
				string2[j]='\0';
			}
			else
				string2[j]='\0';
		}
	}
	
	return 0;
}
