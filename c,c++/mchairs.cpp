#include <iostream>
#include <cstdio>

using namespace std;
#define ll long long
#define mod 1000000007

ll exp(ll a, ll b){
	ll r = 1LL;
	while(b>0){
		if(b&1){
			b--;
			r*=a;
			if(r>=mod)
				r%=mod;
		}
		b/=2;
		a*=a;
		if(a>=mod)
			a%=mod;
	}
	return r;
}

int main(){
	int test, n;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		ll ans = exp(2, n);
		ans--;
		printf("%lld\n", ans);
	}
	return 0;
}
