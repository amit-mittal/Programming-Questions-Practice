#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int test, h, b, count;
	int val;

	scanf("%d", &test);

	while(test--){
		count = -1;
		scanf("%d %d", &h, &b);

//		val = (double)((double)log(h))/((double)log(b));
		val = h;
		while(val>=1){
			++count;
			val/=b;			
		}

		printf("%d\n", count);
	}

	return 0;
}