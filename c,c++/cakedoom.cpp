#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<cstring>

using namespace std;

int function(char string[],int len,int k)
{
	int i,j;
	
	if(string[0]=='?')
	{
		for(j=0;j<k;++j)
		{
			if(j+'0'!=string[len-1]&&j+'0'!=string[1])
			{
				string[0]=j+'0';
				break;
			}
		}
	}
	
	if(string[0]=='?')
		return 0;
	
	for(i=1;i<len-1;++i)
	{
		if(string[i]=='?')
		{
			for(j=0;j<k;++j)
			{
				if(j+'0'!=string[i+1]&&j+'0'!=string[i-1])
				{
					string[i]=j+'0';
					break;
				}
			}
		}
		
		if(string[i]=='?')
			return 0;
	}
	
	if(string[len-1]=='?'&&len>1)
	{
		for(j=0;j<k;++j)
		{
			if(j+'0'!=string[0]&&j+'0'!=string[len-2])
			{
				string[len-1]=j+'0';
				break;
			}
		}
	}
	
	if(string[len-1]=='?')
		return 0;
		
	return 1;
}

int main()
{
	int test,k,len,left,i,valid,check;
	char string[105],ch;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %s",&k,string);
		
		valid=1;

		len=strlen(string);
		if(string[0]==string[len-1]&&string[len-1]!='?')
			valid=0;
		
		if(string[len-1]>=k+'0'&&string[len-1]!='?')
		{
			valid=0;
		}
		
		for(i=0;i<len-1&&valid!=0;++i)
		{
			if(string[i]==string[i+1]&&string[i]!='?')
			{
				valid=0;
				break;
			}
			
			if(string[i]>=k+'0'&&string[i]!='?')
			{
				valid=0;
				break;
			}
		}
		
		if(valid==0)
			printf("NO\n");
		else
		{
			check=function(string,len,k);
			if(check==1)
				printf("%s\n",string);
			else
				printf("NO\n");
		}
	}
	
	return 0;
}
