#include <iostream>
#include <cstdio>

using namespace std;

#define ll long long

ll int fact(int n){
	ll int prod = 1;
	for(int i=2;i<=n;++i){
		prod = (ll int)prod*i;
	}
	return prod;
}

ll int calc(int n){
	if(n==1)
		return 0;

	ll int ans = 0;
	ll int num = fact(n);
	for(int i=2;i<=n;++i){
		if(i&1){
			ans -= (num/fact(i));
		} else {
			ans += (num/fact(i));
		}
	}
	return ans;
}

int main(){
	int test, n;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		printf("%lld\n", calc(n));
	}
	return 0;
}