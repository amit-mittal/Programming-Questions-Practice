#include<stdio.h>

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		unsigned long long int n,k,p=1,i,j;
		scanf("%lld %lld",&n,&k);
		
		--n;--k;
		
		if(k>n-k)
			k=n-k;
			
		for(i=1;i<=k;++i)
		{
			p*=n--;
			p/=i;
		}
			
		printf("%lld\n",p);
	}
	
	return 0;
}
