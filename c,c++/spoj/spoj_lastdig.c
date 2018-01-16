#include<stdio.h>

int main()
{
	long long int test,p,a,b,last,i,ans;
	
	scanf("%lld",&test);
	
	while(test--)
	{
		p=1;
		scanf("%lld",&a);
		scanf("%lld",&b);

		a=a%10;
		
		if(b==0)
			ans = 1;

		if(a==5 && b!=0)
			ans = 5;
		else if(a==0 && b!=0)
			ans = 0;
		else if(b!=0 && a!=5 && a!=0)
		{
			b=b%4;

			if(b==1)
				ans = a;
			else if(b==2)
				ans = (a*a)%10;
			else if(b==3)
				 ans = (a*a*a)%10;
			else{
				if(a&1)//odd
					ans = 1;
				else{
					ans = 6;
				}
			}
		}

		printf("%lld\n", ans);
	}

	return 0;
}
