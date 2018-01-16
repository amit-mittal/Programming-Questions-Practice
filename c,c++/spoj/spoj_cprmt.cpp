#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	char a[1005],b[1005],c;
	int i,j,x[30][2];

	while(scanf("%s %s",a,b)==2)
	{
		for(i=0;i<30;++i)
			x[i][0]=x[i][1]=0;
	
		for(i=0;i<strlen(a);++i)
		{
			c=a[i];
			++x[(int)c-'a'][0];
		}
		
		for(i=0;i<strlen(b);++i)
		{
			c=b[i];
			++x[(int)(c-'a')][1];
		}
		
		for(i=0;i<26;++i)
		{
			if(x[i][0]>=1&&x[i][1]>=1)
			{
				while(min(x[i][0],x[i][1])>0)
				{
				printf("%c",i+'a');
				--x[i][0],--x[i][1];
				}
			}
		}
		puts("");
		
	}
	
	return 0;
}
