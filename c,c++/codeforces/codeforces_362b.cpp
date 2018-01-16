#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)

int main() {
	int test, n, m;
	test = 1;
	while(test--){
		int a[3005];
		s(n), s(m);
		for(int i=0;i<m;++i){
			s(a[i]);
		}
		sort(a, a+m);
		bool ans = true;
		for(int i=0;i<(m-2);++i){
			if(a[i+1]-a[i]==1 && a[i+2]-a[i+1]==1){
				ans = false;
				break;
			}
		}
		if(ans)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}