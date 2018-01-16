#include <iostream>
#include <cstdio>

using namespace std;

#define ll long long

int main(){
	int test;
	ll int n;

	scanf("%d",&test);
	while(test--){
		scanf("%lld", &n);
		
		ll int ans;
		if(n&1){
			ans = n/2;
		} else {
			if(n%4 == 0){
				ans = (n/2) - 1;
			} else {
				ans = (n/2) - 2;
			}
		}
		if(n == 1 || n==2){
			ans = 1;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
