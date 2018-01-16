#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int test,i,j,val,n,m;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %d",&n,&m);
		int a[1001]={0};
		
		while(m--)
		{
			scanf("%d",&val);
			a[val]=1;
		}
		
		int count=0,k=0,j=0,as[1001],ch[1001];
		
		for(i=1;i<=n;++i)
		{
			if(a[i]!=1)
			{
				if(count&1)//odd
				{
					as[k]=i;
					++k;
				}
				else
				{
					ch[j]=i;
					++j;
				}
				++count;
			}
		}
		
		for(i=0;i<j;++i)
			printf("%d ",ch[i]);
		
		printf("\n");
		
		for(i=0;i<k;++i)
			printf("%d ",as[i]);
			
		printf("\n");
	}

	return 0;
}
