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

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
#define mod 1000000007
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second

ll dp[2000005];

ll exp(ll n, ll p){
	ll r = 1LL;
	while(p>0){
		if(p&1){
			p--;
			r = (r*n)%mod;
		}
		n=(n*n)%mod;
		p/=2;
	}
	
	return r;
}

ll inv(ll n){
	return exp(n, mod-3);
}

int main() {
	dp[0] = 1;
	for(int i=1;i<=2000000;++i){
		dp[i] = (dp[i-1]*i)%mod;
	}
	
	int test;
	ll n;
	
	s(test);
	while(test--){
		sll(n);
		
		ll ans = (dp[2*n]*inv(dp[n]))%mod;
		ans = (ans*exp(n+1, mod-2))%mod;
		printf("%lld\n", ans);
	}
	
	return 0;
}