#include<stdio.h>

int main()
{
	unsigned long long int test,pack,n,i,sum=0;
	char c;

	scanf("%lld",&test);
	scanf("%c",&c);

while(test--)
{
	scanf("%lld",&pack);
	sum=0;
	for(i=0;i<pack;++i)
	{
		scanf("%lld",&n);
		sum+=n;
		sum=sum%pack;
	}

	if(sum%pack==0)
		{
		printf("YES\n");
		}
	else
		printf("NO\n");

	scanf("%c",&c);
}

return 0;

}
