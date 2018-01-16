#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

ll int a[200005];

int main(){
	ll int n, k;
	sll(n), sll(k);
	for(ll int i=1;i<=n;++i){
		sll(a[i]);
	}

	ll int total = n;
	ll int acc = 0LL;
	ll int j = 1LL;
	for(ll int i=1;i<=n;++i){
		ll sub = (long long)((j-1)*(total-j)*a[i]);

		if((acc - sub)<k){
			printf("%lld\n", i);
			--total;
		} else {
			ll val = (long long)(a[i]*(j-1));
			acc += val;
			++j;
		}
	}

	return 0;
}