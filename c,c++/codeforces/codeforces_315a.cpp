#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

int main(){
	int n, x, y, a[1005];
	int b[105], d[1005];
	int c[105];
	s(n);
	memset(a, 0, sizeof(a));
	memset(d, 0, sizeof(d));
	for(int i=0;i<n;++i){
		s(c[i]), s(b[i]);
		++a[c[i]];
		++d[b[i]];
	}

	for(int i=0;i<n;++i){
		int o = b[i];
		if(d[o]==1){
			if(o==c[i]){
				a[o] = 1;
			} else {
				a[o] = 0;
			}
		} else {
			a[o] = 0;
		}
	}

	int count = 0;
	for(int i=0;i<=1001;++i){
		count+=a[i];
	}

	printf("%d\n", count);

	return 0;
}