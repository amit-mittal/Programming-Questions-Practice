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
#define MAX 101005

int main() {
	int test, n, m, a[100005];
	int p[MAX]={0};
	int c[MAX];

	s(test);
	p[1] = 1;
	for(int i=2;i*i<=MAX;++i){
		if(p[i]==0){
			int j = i*i;
			while(j<=MAX){
				p[j] = 1;
				j+=i;
			}
		}
	}
	
	while(test--){
		s(n), s(m);
		for(int i=0;i<n;++i)
			s(a[i]);

		if(p[m]==1)
			c[m] = 1;
		else
			c[m] = 0;
		for(int i=m-1;i>=1;--i){
			c[i] = c[i+1];
			if(p[i]==1)
				++c[i];
		}
		sort(a, a+n, greater<int>());
		ll ans = 1LL;
		for(ll int i=0LL;i<n;++i){
			if(a[i]>m){
				ans = 0;
				break;
			}
			ll val = (ll)(c[a[i]] - i);
			if(val<=0){
				ans = 0;
				break;
			}
			ans = (ll)(ans*val);
			if(ans>=mod)
				ans%=mod;
		}
		if(ans<0)
			ans = 0;
		ans = ans%mod;
		pll(ans), nline;
	}

	return 0;
}
