#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>

using namespace std;

long long int hcf(long long int x,long long int y)
{
	if(y==0)
		return x;
	else
		return hcf(y,x%y);
}

int main()
{
	int test;
	long long int a[3],b[3],p,q,k,val,gcd;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&b[0],&b[1],&k);
		a[2]=abs(a[0]-a[1]);
		b[2]=abs(b[0]-b[1]);
		
		p=*min_element(a,a+3);
		q=*min_element(b,b+3);
		
		gcd=hcf(p,q);
		val=p*q/gcd;
		
		val=k/val;
		
		val=(2*val)+1;
		
		printf("%lld\n",val);
		
	}
	
	return 0;
}
