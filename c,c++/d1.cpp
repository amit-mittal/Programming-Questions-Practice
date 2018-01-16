#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
	int test,i,n;
	
	scanf("%d\n",&test);
	
	while(test--)
	{
		int a[4]={0};
		double in;
		int p=1,c=0;
		scanf("%d",&n);
		for(i=2;i<=sqrt(n);++i)
		{
			if(n%i==0)
			{
				p*=n;
			}
			if(p>10000)
			{
				c=1;
				p%=10000;
			}
		}
		if(modf(sqrt(n),&in)==0.0)
			p/=(int)sqrt(n);
		
		if(c==0)	
			printf("%d\n",p%10000);
		else
		{
			printf("%04d\n",p);
	/*		i=0;int r;
			while(p>0)
			{
				r=p%10;
				a[i]=r;
				++i;
				p/=10;
			}
			
			for(i=3;i>=0;--i)
				printf("%d",a[i]);
			printf("\n");*/
		}
	}
	
	return 0;
}
