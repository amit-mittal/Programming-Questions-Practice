#include <iostream>
#include <cstdio>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)

int area(int x1, int y1, int x2, int y2, int x3, int y3){
	int val = ((x1*(y2 - y3)) + (x2*(y3 - y1)) + (x3*(y1 - y2)));
	if(val<0)
		val = val*(-1);
	return val;
}

int main(){
	int n;
	int a[105];
	s(n);
	for(int i=1;i<=n;++i){
		int x1, x2, x3, y1, y2, y3;
		s(x1), s(y1), s(x2), s(y2), s(x3), s(y3);
		a[i] = area(x1, y1, x2, y2, x3, y3);
	}

	int min_v = a[1];
	int min_i = 1;
	int max_v = a[1];
	int max_i = 1;
	for(int i=1;i<=n;++i){
		if(a[i]<=min_v){
			min_v = a[i];
			min_i = i;
		}
		if(a[i]>=max_v){
			max_v = a[i];
			max_i = i;
		}
	}

	printf("%d %d\n", min_i, max_i);

	return 0;
}