#include <stdio.h>
#include <iostream>

using namespace std;

#define MAX 1000006
#define INFINITY 10000000

int main(){
	int test, i, a[MAX+5], val1, val2, val3, n;

	scanf("%d",&test);

	a[1] = 1;
	a[2] = 2;
	for(i=3;i<MAX;++i){
		if(i%3==0){
			val1 = a[i/3] + 1;
		}
		else
			val1 = INFINITY;
		if(i%2==0){
			val2 = a[i/2] + 1;
		}
		else
			val2 = INFINITY;
		val3 = a[i-1]+1;
		a[i] = min(val1, min(val2, val3));
	}

	while(test--){
		scanf("%d",&n);
		printf("%d\n", a[n]);
	}

	return 0;
}