#include <iostream>
#include <cstdio>
using namespace std;
#define lim 10000

int main() {
	int test, n;
	long long int a[60][3];
	
	a[1][0] = a[1][1] = a[1][2] = 1LL;
	for(int i=2;i<=55;++i){
		a[i][0] = a[i-1][0] + a[i-1][1];
		a[i][1] = a[i-1][0] + a[i-1][1] + a[i-1][2];
		a[i][2] = a[i-1][2] + a[i-1][1];
	}
	
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		printf("%lld\n", a[n][0] + a[n][1] + a[n][2]);
	}
	return 0;
}