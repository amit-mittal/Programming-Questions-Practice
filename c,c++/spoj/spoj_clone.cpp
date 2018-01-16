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
	int i,n,m,count,j;
	char string[20004][22];

	scanf("%d %d",&n,&m);
	
	while(n!=0||m!=0)
	{
		int a[20004]={0};
		int visit[20004]={0};
		
		for(i=0;i<n;++i)
			scanf("%s",string[i]);
	
		for(i=0;i<n-1;++i)
		{
			count=0;
			if(visit[i]==0)
			{
				for(j=i+1;j<n;++j)
				{
					if(strcmp(string[i],string[j])==0)
					{
						visit[j]=1;
						++count;
					}
				}
				a[count]++;
			}
		}
		
		for(i=0;i<n;++i)
			printf("%d\n",a[i]);
	
		scanf("%d %d",&n,&m);
	}
	
	return 0;
}
