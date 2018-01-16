#include<stdio.h>
#include<math.h>

int main()
{
	int test,n,ans,l,b;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&n);
		
		b=(int)sqrt(n);
		
		for(;b>=1;--b)
		{
			if(n%b==0)
			{
				l=n/b;
				break;
			}
		}
		
		ans=l-b;
		printf("%d\n",ans);
	}
	
	return 0;
}
