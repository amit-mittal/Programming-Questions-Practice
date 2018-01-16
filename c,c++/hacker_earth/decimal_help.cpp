//Author: ??
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int test, n, d, r;
	scanf("%d",&test);
	while(test--){
		scanf("%d %d %d", &n, &d, &r);

		while(n>=d){
			n = n%d;
		}

		int final;
		for(int i=0;i<r;++i){
			n = n*10;
			final = n/d;
			n = n%d;
		}
		printf("%d\n", final);
	}
	return 0;
}
