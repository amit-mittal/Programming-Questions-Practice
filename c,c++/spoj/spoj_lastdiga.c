#include<stdio.h>

int main()
{
	long long int test,a,b;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld %lld",&a,&b);

		if(b==0)
			printf("1\n");
		else{
			a=a%10;

			if(a==5)
				printf("5\n");
			else if(a==0)
				printf("0\n");
			else
			{
				b=b%4;
				if(b==0)
				{
					if(a&1)
						printf("1\n");
					else
						printf("6\n");
				}
				else if(b==1)
					printf("%lld\n",a);
				else if(b==2)
					printf("%lld\n",(a*a)%10);
				else
					printf("%lld\n",(a*a*a)%10);
			}
		}
	}

	return 0;
}
