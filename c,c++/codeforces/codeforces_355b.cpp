#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

int main(){
	int a[4];
	int n, m;
	int b[1005], c[1005];
	for(int i=0;i<4;++i)
		s(a[i]);
	s(n), s(m);
	for(int i=0;i<n;++i){
		s(b[i]);
	}
	for(int i=0;i<m;++i){
		s(c[i]);
	}

	a[0] = min(a[0], a[1]);
	a[2] = min(a[2], a[3]);

	int c1 = 0;
	for(int i=0;i<n;++i){
		if(b[i]==1){
			c1+=min(a[0], a[1]);
		} else 
			c1+=min(a[1], b[i]*a[0]);
	}
	int c2 = 0;
	for(int i=0;i<m;++i){
		if(c[i]==1){
			c2+=min(a[0], a[1]);
		} else 
			c2+=min(a[1], c[i]*a[0]);
	}

	c1 = min(a[2], c1);
	c2 = min(a[2], c2);

	int ans = min(c1+c2, a[3]);
	printf("%d\n", ans);

	return 0;
}