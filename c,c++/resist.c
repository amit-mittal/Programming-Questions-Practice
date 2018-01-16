#include<stdio.h>

long long int gcd(long long int x,long long int y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}

int main()
{
	int test,i;
	long long int num,den,n,m,hcf,num1,den1;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%lld %lld",&n,&m);
		
		num=1;den=1;
		for(i=1;i<n;++i)
		{
			num1=num+den;
			den1=num+(2*den);
			
		/*	hcf=gcd(num1,den1);
		
			num1=num1/hcf;
			den1/=hcf;
		*/	
			if(num1>m||den1>m)
			{
				if(num1%m!=0)
					num1=num1%m;
				if(den1%m!=0)
					den1=den1%m;
			}
			
			num=num1;
			den=den1;
		}
		
		hcf=gcd(num,den);
		
		num=num/hcf;
		den/=hcf;
		
		num=num%m;
		den=den%m;
		
		printf("%lld/%lld\n",num,den);
	}
	
	return 0;
}
