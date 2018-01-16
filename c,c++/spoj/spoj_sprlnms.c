#include<stdio.h>

int main()
{
	long long int ans,test,num;
	scanf("%lld",&test);

	while(test--)
	{
		scanf("%lld",&num);
		ans=(2*num-1)*(2*num-1)+num-1;
		printf("%lld\n",ans);
	}

	return 0;
}
