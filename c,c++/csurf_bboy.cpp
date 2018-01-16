#include<iostream>
#include<stdio.h>

int main()
{
	int t,n,i,max,mi,ma,a;

	scanf("%d",&t);
	while(t--)
	{
		max=-1;
		scanf("%d",&n);
		
/*		for(i=1;i<=n;++i)
		{
			a=n%i;
			
			if(a>max)
			{
				max=a;
				mi=i;
				ma=i;
			}
			else if(a==max)
			{
				ma=i;
			}
		}*/
		
		max=n/2;
		++max;
			
		if(n==2)
			printf("1 2\n");
		else
			printf("%d %d\n",max,max);
		
	}

	return 0;
}
