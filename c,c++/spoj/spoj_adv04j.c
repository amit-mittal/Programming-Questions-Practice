#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		long long n,val,p;
		scanf("%lld",&n);
		
		p=1;val=0;
		
		while(p<n)
		{
			p*=2;
			val++;
		}
		val++;
		
		printf("%lld\n",val);
	}
	
	return 0;
}
