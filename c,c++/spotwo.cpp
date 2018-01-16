#include <stdio.h>
#include <iostream>

using namespace std;

#define ll long long
#define mod 1000000007
#define div 1000000006

ll exp(ll p, ll q){
	ll r = 1LL;
	while(q>0){
		if(q&1){
			q--;
			r*=p;
			if(r>mod)
				r%=mod;
		}
		q/=2;
		p*=p;
		if(p>mod)
			p%=mod;
	}
	return r;
}

unsigned ll conv(int n){
	ll p = 1LL;
	unsigned ll ans = 0LL;
	while(n>0){
		int r = n%2;
		ans = ans + ((p)*r);
		p*=10LL;
		n/=2;
	}
	return ans;
}

int main() {
	int test, n;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		unsigned ll bin = conv(n);
		if(bin>=div)
			bin = bin%div;
		bin*=2;
		if(bin>=div)
			bin = bin%div;
		ll ans = exp(2, bin);
		
		printf("%lld\n", ans);
	}
	return 0;
}
