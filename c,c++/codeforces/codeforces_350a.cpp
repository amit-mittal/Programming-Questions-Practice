#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define s(n) scanf("%d", &n)

int main(){
	int n, m;
	int a[105], b[105];
	s(n), s(m);
	for(int i=0;i<n;++i){
		s(a[i]);
	}
	for(int i=0;i<m;++i){
		s(b[i]);
	}
	sort(a, a+n);
	sort(b, b+m);

	bool g = true;
	int ans = max(a[n-1], 2*a[0]);
	if(2*a[0]>ans)
		g = false;

	if(b[0]<=ans)
		g = false;

	if(!g)
		printf("-1\n");
	else
		printf("%d\n", ans);

	return 0;
}