#include<iostream.h>
#include<stdio.h>

int main()
{
	long int sum,n,m,a;
	scanf("%ld",&n);
	scanf("%ld",&m);
	scanf("%ld",&a);

	if(n%a==0)
		sum=n/a;
	else
		sum=(n/a)+1;

	if(m%a==0)
		sum+=m/a;
	else
		sum+=(m/a)+1;



	printf("%ld\n",sum);


	return 0;
}