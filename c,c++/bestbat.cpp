#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

long long int fact(int n)
{
	long long int p=1;
	
	while(n>1)
	{
		p=p*n;
		--n;
	}
	return p;
}

long long int comb(int n,int p)
{
	long long int val;
	
	val=fact(n)/(fact(n-p)*fact(p));
	return val;
}

int main()
{
	int test,i,a[12],n;
	
	scanf("%d",&test);
	
	while(test--)
	{
		int count=0,equal=0,val=0,b[200]={0},total;
		for(i=0;i<11;++i)
		{
			scanf("%d",&a[i]);
			++b[a[i]];
		}
			
		scanf("%d",&n);
		
		sort(a,a+11);
		
		count=10-n+1;
		i=count;
		
		while(a[i]==a[count])
		{
			++equal;
			++i;
		}
		total=b[a[count]];
		
		printf("%lld\n",comb(total,equal));
	}
	
	return 0;
}
