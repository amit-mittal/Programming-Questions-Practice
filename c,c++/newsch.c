#include <stdio.h>

#define MOD 1000000007

long long int func(long long int n){
	long long int x;

	if(n<=0)
		return 1;
	
	if(n&1){//odd
		x=func(n/2);

		if(x>MOD)
			x%=MOD;
		
		x=x*x;

		if(x>MOD)
			x%=MOD;

		x=3*x;

		if(x>MOD)
			x%=MOD;

		return x;
	}
	else{
		x=func(n/2);

		if(x>MOD)
			x%=MOD;

		x=x*x;

		if(x>MOD)
			x%=MOD;

		return x;
	}
}

int main(){
	int test;
	long long int n,ans;

	scanf("%d",&test);

	while(test--){
		scanf("%lld",&n);

		if(n&1){
			ans=func(n)-3;
		}
		else{
			ans=func(n)+3;
		}

		if(ans>MOD)
			ans%=MOD;

		printf("%lld\n",ans);
	}

	return 0;
}