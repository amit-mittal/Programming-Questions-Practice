#include <iostream>
#include <cstdio>

using namespace std;

#define ll long long
#define s(n) scanf("%lld", &n)

int main(){
	ll int test;
	s(test);
	ll int a[1005], n, k, ans;
	char str[10];
	
	while(test--){
		s(n), s(k), s(ans);

		for(ll int i=0;i<n;++i){
			s(a[i]);
		}
		scanf("%s", str);

		if(k!=0){
			if(str[0]=='X'){
				if(k&1){
					for(ll int i=0;i<n;++i){
						ans = ans^a[i];
					}	
				}
			} else if(str[0]=='A'){
				for(ll int i=0;i<n;++i){
					ans = ans&a[i];
				}
			} else if(str[0]=='O'){
				for(ll int i=0;i<n;++i){
					ans = ans|a[i];
				}
			}
		}

		printf("%lld\n", ans);
	}

	return 0;
}