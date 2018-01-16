#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
	char string[1000];
	char c;
	scanf("%s",string);
	int i=0,count,j;
	int len=strlen(string);
	
	
	for(i=0;i<len;++i)
	{
		c=string[i];
		count=0;
		
		for(j=i;j<len;++j)
		{
			if(string[j]==c&&string[j]!=0)
			{
				++count;
				string[j]=0;
			}
		}
		if(c!=0)
			printf("%c%d",c,count);
	}
	
	
	return 0;
}
