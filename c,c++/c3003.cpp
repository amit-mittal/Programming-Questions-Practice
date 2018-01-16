#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int a[200]={0},b[200]={0};
	char s1[1000],s2[1000];
	int i;
	
	scanf("%s %s",s1,s2);
	
	for(i=0;i<strlen(s1);++i)
	{
		++a[s1[i]];
	}
	for(i=0;i<strlen(s2);++i)
	{
		b[s2[i]]=1;
	}
	
	for(i=60;i<130;++i)
	{
		if(b[i]==0)
		{
			if(a[i]>0)
			{
				printf("%c%d",i,a[i]);
			}
		}
	}
	
	return 0;
}
