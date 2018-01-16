#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cctype>
#include<numeric>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
	int test,i,j,count,len;
	char string[1005],ch;

	scanf("%d",&test);
	
	while(test--)
	{
		int a[1005]={0},b[1005]={0};
		scanf("%s",string);
		
		len=strlen(string);
		
		j=0;
		for(i=0;i<len;)
		{
			count=1;
			a[j]=string[i]-'0';
			
			ch=string[i];
			
			++i;
			while(string[i]==ch)
			{
				++count;
				++i;
			}
		//	printf("%d");
			
			b[j]=count;
			++j;
		}
		
		for(i=0;i<j;++i)
		{
			printf("%d%d",b[i],a[i]);
		}
		printf("\n");
		
	}
	
	return 0;
}
