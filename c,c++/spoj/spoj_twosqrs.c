#include<stdio.h>
#include<math.h>

int main()
{
	unsigned long long int test,i,num,p,f,j;double y;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld",&num);f=0;
		p=(unsigned long long int)sqrt(num);
		for(i=0;i<=p;++i)
		{
			y=sqrt(num-(i*i));
			j=(long long int)y;
			if(fabs(y-(double)j) < 1e-10)
			{
				printf("Yes\n");
				f=1;
				break;
			}
		}
		if(f==0)
			printf("No\n");
	}

	return 0;
}
