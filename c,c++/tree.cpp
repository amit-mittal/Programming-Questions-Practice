//Author: KewlJerk
#include <cstdio>
#include <iostream>

using namespace std;

#define MOD 1000000007
#define s(a) scanf("%lld",&a)
#define ll long long

ll int exp(ll int p, ll int q){
	if(q<0)
		return 0;

	ll int r = 1;
	while (q != 0) {
		if (q % 2 == 1) {
			r *= p;
			q--;

			if(r>=MOD)
				r %= MOD;
		}
		p *= p;
		q /= 2;

		if(p>=MOD)
			p %= MOD;

	}
	return r;
}

int main() {
	ll int n, k, ans;
	s(n), s(k);
	
	if(k==1){
		ans = exp(n, n-2);
	} else if(k==2){
		ans = exp(n, 2*(n-2));
		ans = (ans*exp(2, n-1))%MOD;
		ans = (ans*n)%MOD;
		ans = (ans*(n-1))%MOD;
	} else{
		ans = exp(n, 3*(n-2));
		ans = (ans*exp(6, n-1))%MOD;
		ans = (ans*n)%MOD;
		ans = (ans*(n-1))%MOD;
		ans = (ans*(n-1))%MOD;
	}

	printf("%lld\n", ans);

	return 0;
}