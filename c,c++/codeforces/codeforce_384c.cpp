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

int main() {
	ll a[200005];
	ll l[200005];
	ll r[200005];
	int n;
	s(n);
	for(int i=0;i<n;++i)
			cin >> a[i];
	l[0] = 0;
	for(int i=1;i<n;++i){
		if(a[i-1]==1)
			l[i] = l[i-1]+1;
		else
			l[i] = l[i-1];
	}
	r[n-1] = 0;
	for(int i=n-2;i>=0;--i){
		if(a[i+1]==0)
			r[i] = r[i+1]+1;
		else
			r[i] = r[i+1];
	}
	ll c = 0;
	ll ans = 0LL;
	for(int i=0;i<n;++i){
		if(a[i]==1){
			ans+=(l[i]+r[i]-c);
			++c;
		}
	}
	c = 0;
	ll t = 0LL;
	for(int i=n-1;i>=0;--i){
		if(a[i]==0){
			t+=(l[i]+r[i]-c);
			++c;
		}
	}
	cout << t << endl;
	cout << ans << endl;
	return 0;
}
