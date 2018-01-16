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

ll exp(ll p, ll b){
	ll r = 1LL;
	while(b>0){
		if(b&1){
			b--;
			r = r*p;
			if(r>=mod)
				r%=mod;
		}
		p*=p;
		b/=2;
		if(p>=mod)
			p%=mod;
	}
	return r;
}

int main() {
	ll int test, n;
	sll(test);
	while(test--){
		sll(n);
		ll ans = exp(2LL, n-1);
		pll(ans);
		nline;
	}
	return 0;
}
