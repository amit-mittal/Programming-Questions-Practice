#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;

int main() {
	scanf("%d %d", &n, &k);
	int a[100005];

	for(int i=1;i<=n;++i){
		a[i] = i;
	}

	if(k==n){
		printf("-1\n");
		return 0;
	}

	for(int i=n-k;i>1;i-=2){
		swap(a[i], a[i-1]);
	}

	for(int i=1;i<=n;++i){
		printf("%d ", a[i]);
	}

	return 0;
}
