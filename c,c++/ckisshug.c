#include<stdio.h>
#include<math.h>

#define MOD 1000000007

long long int func(int a,int n){
	long long int x;

	if(n<=0)
		return 1;
	
	if(n&1){//odd
		x=func(a,n/2)%MOD;
		return (a*((x*x)%MOD))%MOD;
	}
	else{
		x=func(a,n/2)%MOD;
		return (x*x)%MOD;
	}
}

int main(){
	long long int test,n,k;
	long long int ans;

	scanf("%lld",&test);

	while(test--){
		scanf("%lld",&n);

		if(n&1){
			k=n/2;
			ans=2*(func(2,k+1)-1);
		}
		else{
			k=(n/2)-1;
			ans=2*(func(2,k+1)-1)+func(2,n/2);
		}

		if(ans>MOD)
			ans%=MOD;

		printf("%lld\n",ans);
	}

	return 0;
}