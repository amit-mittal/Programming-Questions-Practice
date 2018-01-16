#include<stdio.h>

int main()
{
	long long int num,d,n,i,f=0;
	scanf("%lld",&num);
	scanf("%lld",&d);
	for(i=0;i<num;++i)
	{
		scanf("%lld",&n);
		if(n%d==0)
			++f;
	}
	printf("%lld\n",f);
	return 0;
}
