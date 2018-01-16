#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;
#define s(n) scanf("%d", &(n))
#define ll long long



int main() {
	int test;
	s(test);
	while(test--){
		int n;
		int a[100005];
		s(n);
		for(int i=0;i<n;++i)
			s(a[i]);
		bool ans = true;
		for(int i=0;i<n;++i){
			if(a[i]>i)
				ans = false;
		}
		if(ans)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}