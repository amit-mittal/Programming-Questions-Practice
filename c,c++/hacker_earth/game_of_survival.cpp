#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)

int main(){
	int test, n;
	int a[100005], b[100005];
	
	s(test);
	while(test--){
		s(n);
		for(int i=0;i<n;++i)
			s(a[i]);
		for(int i=0;i<n;++i)
			s(b[i]);
		sort(a, a+n);
		sort(b, b+n);

		bool ans = true;
		for(int i=0;i<n;++i){
			if(a[i]<b[i])
				ans = false;
		}
		if(ans)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}