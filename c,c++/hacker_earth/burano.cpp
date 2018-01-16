#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, n;
	scanf("%d", &test);
	while(test--){
		int a[25][3];
		scanf("%d", &n);
		for(int i=1;i<=n;++i)
			scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
		int b[25][3] = {0};
		for(int i=1;i<=n;++i){
			b[i][0] = min(b[i-1][1]+a[i][0], b[i-1][2]+a[i][0]);
			b[i][1] = min(b[i-1][0]+a[i][1], b[i-1][2]+a[i][1]);
			b[i][2] = min(b[i-1][0]+a[i][2], b[i-1][1]+a[i][2]);
		}
		printf("%d\n", min(b[n][0], min(b[n][1], b[n][2])));
	}
	return 0;
}
