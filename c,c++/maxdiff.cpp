#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

int main(){
	ll int test, n, k, a[105];
	scanf("%lld",&test);

	while(test--){
		scanf("%lld %lld",&n,&k);
		for(ll int i=0;i<n;++i){
			scanf("%lld",&a[i]);
		}

		sort(a, a+n);
		
		ll int sum=0;
		for(ll int i=0;i<k;++i){
			sum+=a[i];
		}

		ll int s=0;
		for(ll int i=k;i<n;++i){
			s+=a[i];
		}
		printf("%lld\n", abs(s-sum));
	}

	return 0;
}