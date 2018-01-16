#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define ll long long
#define mod(n) ((n>0)?n:-n)
#define s(n) scanf("%d", &n)

int main(){
	int test, n, a[1000005];
	s(test);

	while(test--){
		s(n);
		for(int i=0;i<n;++i){
			s(a[i]);
		}
		sort(a, a+n);
		ll int ans = 0LL;
		if(n&1){
			int val = a[(n/2)];
			for(int i=0;i<(n/2);++i){
				ans += (val - a[i]);
			}
			for(int i=(n/2)+1;i<n;++i){
				ans += (a[i] - val);
			}
		} else {
			int val = (a[(n/2)] + a[(n/2)-1])/2;
			for(int i=0;i<(n/2);++i){
				ans += (val - a[i]);
			}
			for(int i=(n/2);i<n;++i){
				ans += (a[i] - val);
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}