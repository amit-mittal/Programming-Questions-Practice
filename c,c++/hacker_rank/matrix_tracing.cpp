#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
 
using namespace std;
 
#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define pll(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long
#define MOD 1000000007

ll int modPow(ll int a, ll int x, ll int p) {
	ll res = 1LL;
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
	ll int numerator = 1; // n * (n-1) * ... * (n-k+1)
	for (ll int i=0; i<k; i++) {
		numerator = (numerator * (n-i) ) % p;
	}
	ll int denominator = 1; // k!
	for (ll int i=1; i<=k; i++) {
		denominator = (denominator * i) % p;
	}
	return ( numerator* modInverse(denominator,p) ) % p;
}

int main(){
	int test;
	s(test);
	while(test--){
		ll n, m;
		sll(m), sll(n);
		ll ans = (ll)modBinomial(m+n-2, m-1, MOD);
		printf("%lld\n", ans);
	}
}