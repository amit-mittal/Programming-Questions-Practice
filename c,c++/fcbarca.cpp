#include <stdio.h>
#include <iostream>

#define MOD 1000000007

using namespace std;

int main(){
	long long int test;
	long long int n,k,fn,fn_1,fn_2;

	scanf("%lld",&test);

	while(test--){
		scanf("%lld %lld",&n, &k);
		fn_1=k*(k-1);
		fn_2=k;

		if(n==2)
			printf("%lld\n", k);
		else if(n==3)
			printf("%lld\n", k*(k-1));
		else{
			fn=0;
			for(int i=3;i<n;++i){
				fn=((fn_2)*k)%MOD;
				fn+=((fn_1)*(k-1));
				fn%=MOD;

				fn_2=fn_1;
				fn_1=fn;
			}
			printf("%lld\n", fn);
		}
	}

	return 0;
}