#include <iostream>
#include <cstdio>

using namespace std;

#define ll long long
#define MOD 1000000007

ll int exp(ll int p, ll int q){
	ll int r = 1;
	while(q>0){
		if(q&1){
			r = r*p;
			--q;
			if(r>=MOD)
				r = r%MOD;
		}
		p = p*p;
		if(p>=MOD)
			p = p%MOD;
		q/=2;
	}
	return r;
}

int main() {
	ll int test, n, m, q, k;
	scanf("%lld", &test);
	while(test--){
		scanf("%lld %lld %lld %lld", &n, &m, &q, &k);
		if(m<q+1){
			printf("0\n");
			continue;
		}
		ll int ans = exp(q+1, n) - (2*exp(q, n)) + exp(q-1, n);
		while(ans<0)
			ans = ans+MOD;
		if(ans>=MOD)
			ans = ans%MOD;
			
		ans = ((m-q)*ans)%MOD;
		printf("%lld\n", ans);
	}
	return 0;
}