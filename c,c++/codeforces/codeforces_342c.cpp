#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double r, h;
	scanf("%lf %lf", &r, &h);

	double val = (r*sqrt(3)/2);

	if(h>val){
		int ans = 3;
		h-=val;
		ans+=(2*(h/r));
		printf("%d\n", ans);
	} else {
		if(2*h>=r){
			printf("2\n");
		} else {
			printf("1\n");
		}
	}

	return 0;
}
