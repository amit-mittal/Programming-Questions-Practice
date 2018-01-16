#include<stdio.h>

int main()
{
	int count,t,a,b;

	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d %d",&a,&b);
		count=0;
		
		while(a!=1||b!=1)
		{
//			printf("%d %d\n",a,b);
			if(a<b&&a!=1)
			{
				b=0;
				b=a/2;
				a=a-b;
				++count;
			}
			else if(a>=b&&b!=1)
			{
				a=0;
				a=b/2;
				b=b-a;
				++count;
			}
			else if(a==1)
			{
				a=0;
				a=b/2;
				b=b-a;
				++count;
			}
			else if(b==1)
			{
				b=0;
				b=a/2;
				a=a-b;
				++count;
			}
			count%=2;
		}
//		printf("%d %d\n",a,b);
		if(count==1)
			printf("Alice\n");
		else
			printf("Bob\n");		
	}
	
	return 0;
}
