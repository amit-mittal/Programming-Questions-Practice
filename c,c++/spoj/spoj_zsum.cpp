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

using namespace std;

#define mod 10000007
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

ll int exp(ll a, ll b){
	ll r = 1LL;
	while(b>0){
		if(b&1){
			r = r*a;
			b--;
			if(r>=mod)
				r = r%mod;
		}
		a = a*a;
		if(a>=mod)
			a = a%mod;
		b = b/2;
	}
	return r;
}

int main() {
	ll n, k;
	while(1){
		sll(n), sll(k);
		
		if(n==0 && k==0)
			break;

		ll ans = exp(n, k);
		ans+=exp(n, n);
		if(ans>=mod)
			ans = ans%mod;
		ll val = exp(n-1, k);
		val+=exp(n-1, n-1);
		if(val>=mod)
			val%=mod;
		val*=2;
		ans+=val;
		if(ans>=mod)
			ans%=mod;
		printf("%lld\n", ans);
	}
	return 0;
}
