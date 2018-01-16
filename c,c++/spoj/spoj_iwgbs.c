#include<stdio.h>

long long int comb(int n,int k)
{
	long long int i=1,p=1;
	if(k>n-k)
			k=n-k;
			
		for(i=1;i<=k;++i)
		{
			p*=n--;
			p/=i;
		}
	return p;
}

int main()
{
	int n,i;
	long long int count;
	
	count=1;
	scanf("%d",&n);
	
	for(i=n/2;i<n;++i)
	{
		count+=comb(i+1,n-i);
	}
	
	printf("%lld\n",count);

	return 0;
}
