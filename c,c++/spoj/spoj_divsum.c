#include<stdio.h>
#include<math.h>

int main()
{
	long long int test,j=1,i,num,p,sum=1;
	float d;
	scanf("%lld",&test);

	while(test--)
	{
		sum=1;
		scanf("%lld",&num);

		for(i=2;i<=(long long int)sqrt(num);i+=2)
		{
				if(num%i==0)
				{
					sum+=i+(num/i);
				}
		}
		d=sqrt(num);

		if(d-(long long int)d==0)
			sum-=d;

		printf("%lld\n",sum);
	}

	return 0;
}
