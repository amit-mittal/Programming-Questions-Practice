#include <iostream>
#include <cstdio>
#include <cstring>

#define ll long long

using namespace std;

ll int modPow(ll int a, ll int x, ll int p) {
    ll int res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

ll int modInverse(ll int a, ll int p) {
    return modPow(a, p-2, p);
}

ll int modBinomial(ll int n, ll int k, ll int p) {
    ll int numerator = 1;
    for (ll int i=0; i<k; i++) {
        numerator = (numerator * (n-i) ) % p;
    }
    
    ll int denominator = 1;
    for (ll int i=1; i<=k; i++) {
        denominator = (denominator * i) % p;
    }
    
    return ( numerator* modInverse(denominator,p) ) % p;
}

int main(){
    ll int MOD=1000000007;
	ll int test, n, ans, i, val;

	scanf("%lld",&test);
	while(test--){
        ans = 0;
		scanf("%lld",&n);
		for(i=0;i<n;++i)
			scanf("%lld",&val);

		ans += modPow(2, n, MOD);
		if(n%2==0)
			ans -= modBinomial(n, n/2, MOD);
        while(ans<0)
            ans+=MOD;
        if(ans%2==1)
            ans+=MOD;
        ans/=2;
		if(ans>=MOD)
            ans%=MOD;

		printf("%lld\n", ans);
	}

	return 0;
}