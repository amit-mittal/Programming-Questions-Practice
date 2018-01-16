#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	int i,len,count=1,ans;
	char string[4000];
	scanf("%s",string);
	
	while(string[0]!='-')
	{
		int counter=0,free=0;
		
		len=strlen(string);
		
		for(i=0;i<len;++i)
		{
			if(string[i]=='{')
				++counter;
			else if(string[i]=='}')
				--counter;
			if(counter<0)
				++free,counter+=2;
				
			ans=free+(counter>>1);
			
		}
		
		printf("%d. %d\n",count,ans);
		
		scanf("%s",string);
		++count;
	}
	
	return 0;
}
