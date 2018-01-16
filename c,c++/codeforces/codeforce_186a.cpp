#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
	char s1[100005],s2[100005],a[5],b[5];
	int k,i,count,len;
	
	scanf("%s %s",s1,s2);
	
	if(strlen(s1)==strlen(s2))
	{
		
		k=0;
		count=0;
		len=strlen(s1);
		
		for(i=0;i<len;++i)
		{
			if(s1[i]!=s2[i])
			{
				++count;
				a[k]=s1[i];
				b[k]=s2[i];
				++k;
			}
			
			if(count>2)
				break;
		}
		
		if(count==2)
		{
			if(a[0]==b[1]&&a[1]==b[0])
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	else
		printf("NO\n");
	
	return 0;
}
