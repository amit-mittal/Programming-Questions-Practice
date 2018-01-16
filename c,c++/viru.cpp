#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int t,n,i,j,r,count;
	
	scanf("%d",&t);
	
	while(t--)
	{
		int a[10]={0};
	
		scanf("%d",&n);
		
		int q=n;i=0;
		
		while(q>0)
		{
			r=q%10;
			++a[r];
			q=q/10;
		}
		
		count=0;
		
		for(i=0;i<10;++i)
		{
			if(a[i]>=1)
				count+=i;
		}
		
//		printf("%d\n",count);
		
		if(count&1)
			printf("Vihan\n");
		else
			printf("Rupika\n");
		
	}
	
	return 0;
}
