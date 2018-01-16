#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int i,j,t,flag,n;
	char string[105][15];
	
	scanf("%d",&t);
	while(t--)
	{
		int val=-1;
		flag=0;
		
		scanf("%d",&n);
		
		for(i=0;i<n;++i)
		{
			scanf("%s",string[i]);
			
			if(flag==0)
			{
				if(string[i][0]=='#')
				{
					val=i;
				}
			}
			
			if(string[i][0]>=65)
			{
				flag=1;
			}
		}
		
		if(flag==1)
		{
		for(j=val+2;j<n;++j)
		{
			printf("%s ",string[j]);
		}
		
		printf("%s",string[val+1]);
		
		if(val>=0)
		{
			for(j=0;j<=val;++j)
			{
				printf(" %s",string[j]);
			}
		}
		}
		else
		{
			printf("%s",string[0]);
			for(i=1;i<n;++i)
				printf(" %s",string[i]);
		}
		printf("\n");
	}
	
	return 0;
}
