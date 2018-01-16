#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a[100005];
	int n, l, r, m, t;
	
	scanf("%d",&n);

	a[0] = 1;
	for(int i=1;i<=n;++i){
		int v;
		scanf("%d",&v);
		a[i] = a[i-1]*v;
	}

	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&l,&r,&m);
		int val = (a[r]/a[l-1]);
		val = val%m;
		printf("%d\n", val);
	}
	return 0;
}