#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

int main(){
	ll int a[100005];
	ll int n, l, r, q1, q2;
	sll(n), sll(l), sll(r), sll(q1), sll(q2);
	for(ll int i=0;i<n;++i){
		sll(a[i]);
	}

	sort(a, a+n);

	if(n&1){
		ll int c=0LL;
		ll int v = max(l, r);
		ll int x = min(l, r);
		for(int i=0;i<n/2;++i){
			c+=(ll)(v*a[i]);
		}
		for(int i=n-1;i>n/2;--i){
			c+=(ll)(x*a[i]);
		}
		c+=(ll)(x*a[n/2]);

		printf("%lld\n", c);
	} else {
		ll int c=0LL;
		ll int v = max(l, r);
		ll int x = min(l, r);
		for(int i=0;i<((n/2)-1);++i){
			c+=(ll)(v*a[i]);
		}
		for(int i=n-1;i>=n/2;--i){
			c+=(ll)(x*a[i]);
		}

		if(x==l && x!=r){
			c+=(ll)min(x*a[(n/2)-1]+q1, v*a[(n/2)-1]);
		} else if(x==r && x!=l){
			c+=(ll)min(x*a[(n/2)-1]+q2, v*a[(n/2)-1]);
		} else {
			c+=(ll)(x*a[(n/2)-1]);
		}

		printf("%lld\n", c);
	}

	return 0;
}