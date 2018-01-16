#include<stdio.h>
#include<math.h>

int main()
{
	int n,q,t,b,c,a[100006]={0},i;
	
	scanf("%d %d",&n,&q);
	
	while(q--)
	{
		int count=0;
		
		scanf("%d %d %d",&t,&b,&c);
		
		if(t==0)
		{
			for(i=b;i<=c;++i)
				++a[i];
		}
		else if(t==1)
		{
			for(i=b;i<=c;++i)
			{
				if(a[i]%3==0)
					++count;
			}
			printf("%d\n",count);
		}
	}
	
	return 0;
}
