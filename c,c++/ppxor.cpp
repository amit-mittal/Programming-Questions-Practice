#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <stack>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)

int main(){
	int test, n;
	s(test);
	int a[100005];
	ll int b[100005];

	while(test--){
		s(n);

		ll int ans = 0;
		ll int prev = 0LL;
		for(int i=0;i<n;++i){
			s(a[i]);
			prev = prev^a[i];
			b[i] = (ll)prev;
			ans+=b[i];
		}
		
		for(int i=0;i<n;++i){
			for(int j=i;j<n;++j){
				b[j] = (ll)b[j]^a[i];
				ans+=b[j];
			}
		}

		printf("%lld\n", ans);
	}
	
	return 0;
}