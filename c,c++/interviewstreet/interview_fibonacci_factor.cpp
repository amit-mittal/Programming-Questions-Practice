#include<iostream>
#include<stdio.h>

using namespace std;

long long int gcd(long long int a,long long int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}

int main()
{
	long long int test,a,hcf,fib1,fib2,fib,k;

	scanf("%lld",&test);

	while(test--){
		scanf("%lld",&k);

		hcf=1;
		fib1=1;
		fib2=1;
		while(hcf==1){
			fib=fib1+fib2;
			fib1=fib2;
			fib2=fib;
			hcf=gcd(fib2,k);
		}
		printf("%lld %lld\n",fib2,hcf);
	}

	return 0;
}