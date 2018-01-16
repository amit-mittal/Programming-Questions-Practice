#include<stdio.h>

int main()
{
	long long int num,p,i;
	int a;
	while(scanf("%lld",&num)==1)
	{
		i=0;p=0;
		while(p<num)
		{
			++i;
			p=i*(i+1)/2;
		}
		--i;
	//	printf("%lld\n",i);
		a=i%26;
	//	printf("%d\n",a);
		printf("TERM %lld IS %c\n",num,'A'+a);
	}	
	return 0;
}
