/*
	Not a correct program
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define ll long long
#define s(n) scanf("%lld", &n)

int main(){
	ll int m, r;
	s(m), s(r);

	double c = ((2*m*m) + 4)/3;

	double ans = c*r;
	double v = (double)(m-1)*r;
	ans += v*sqrt(2);
	ans = ans/m;

	printf("%.10lf\n", ans);

	return 0;
}