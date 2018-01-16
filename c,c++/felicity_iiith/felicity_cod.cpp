#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	double val, first;
	double a[1005];
	
	scanf("%d", &n);
	scanf("%lf", &first);
	
	a[0] = 1.0000f;
	for(int i=1;i<n;++i){
		scanf("%lf", &val);
		a[i] = first/val;
	}
	for(int i=0;i<n-1;++i){
		printf("%.4lf ", a[i]);
	}
	printf("%.4lf", a[n-1]);
	return 0;
}