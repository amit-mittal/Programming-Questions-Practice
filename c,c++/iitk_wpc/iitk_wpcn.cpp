#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, w, b;
	scanf("%d",&test);
	while(test--){
		scanf("%d %d",&w, &b);
		if(b&1)
			printf("%.6lf\n", 1.0);
		else
			printf("%.6lf\n", 0.0);
	}
	return 0;
}
