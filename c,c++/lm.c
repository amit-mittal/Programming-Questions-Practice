#include<stdio.h>
#include<math.h>

long long int a[1000002]={0};

int v=1000000007;

long long int comb(int n)
{
	long long int i,p;
	i=1;
	p=a[n];
			
	if(p==0)
		a[n]=(2*(2*n-1)*comb(n-1)/(n-1));
	else
		return p;
		
	if(a[n]>v)
		a[n]=a[n]%v;
		
	p=a[n];
	return p;
}
	
int main()
{	
	a[1]=1;
	a[2]=6;
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int a,i;
		scanf("%d",&a);
		long long int val=0;
		
		val+=comb(a);
		
		printf("%lld\n",val);
	}
	
	return 0;
}
