#include <stdio.h>
#define mod 1000000007
long long function3(int n){
	if(n<=0) return 0;
	else if(n==1) return 1;
	return (function3(n-1)+function3(n-2))%mod;
}
long long function2(int n){
	if(n<0)	n=0;
	return (2*function3(n-2)+function3(n-3))%mod;
}
long long function(int n){
	return (function2(n-1)+function2(n-2)+function2(n-3))%mod;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",function(n));
	}
	return 0;
}
