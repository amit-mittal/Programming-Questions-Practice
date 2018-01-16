#include<stdio.h>

int main()
{
	int test,a,b,count;
	
	scanf("%d",&test);
	
	while(test--)
	{
		count=0;
		scanf("%d %d",&a,&b);
		
		while(a!=0 || b!=0)
		{
			if(a%2!=b%2)
				++count;
				
			a=a>>1;
			b=b>>1;			
		}
		
		printf("%d\n",count);
	}
	
	return 0;
}
