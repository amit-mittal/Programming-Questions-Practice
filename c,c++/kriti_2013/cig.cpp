#include <iostream>
#include <cstdio>
#include <cassert>

using namespace std;

#define N 1000000000

#define s(n) scanf("%d", &n)
#define ll long long
#define sll(n) scanf("%lld", &n)

int main(){
	ll test, n, k;
	sll(test);

	assert(test<=100);
	assert(test>=1);
	
	while(test--){
		sll(n), sll(k);
		
		assert(n<=N);
		assert(n>=2);
		assert(k>1);
		assert(k<=n);
		
		ll ans = n;
		ll rem = n;
	
		while(1){
			ll val = rem/k;
			if(val==0)
				break;

			ans = ans + val;
			rem = rem - (k*val);
			rem = rem + val;
		}

		printf("%lld\n", ans);
	}
	
	return 0;
}
