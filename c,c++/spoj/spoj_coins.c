#include<stdio.h>

int array[2500000]={0};

long long int coin(long long int n)
{
	long long val,a1,b1,c1,a,b,c;
	if(n<=6)
		return n;
	else
	{
		if(n<5000000)
		{
		a=n/2;
		if(array[a]==0)
			array[a]=coin(a);
		b=n/3;
		if(array[b]==0)
			array[b]=coin(b);
		c=n/4;
		if(array[c]==0)
			array[c]=coin(c);
		val=array[a]+array[b]+array[c];
		if(val>n)
			return val;
		else
			return n;
		}
		else
		{
			a1=coin(n/2);b1=coin(n/3);c1=coin(n/4);val=a1+b1+c1;return val;
		}
	}
}

int main()
{
	long long int num,val,i;

	for(i=1;i<=6;++i)
		array[i]=i;

	while(scanf("%lld",&num)==1)
	{
		val=coin(num);
		printf("%lld\n",val);
	}

	return 0;
}
