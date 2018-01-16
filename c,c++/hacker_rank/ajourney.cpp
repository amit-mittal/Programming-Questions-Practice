#include <iostream>
#include <cstdio>
#include <cmath>

#define ll long long

using namespace std;

int MOD;

ll int expt(ll int p, ll int q)
{
	ll int r = 1;

	while (q != 0) {
		if (q % 2 == 1) {
			r *= p;
			q--;
			if(r>MOD)
				r%=MOD;
		}
		p *= p;
		q /= 2;
		if(p>MOD)
			p%=MOD;
	}
	if(r>MOD)
		r%=MOD;

	return r;
}

long long int first(ll int n){
	double val = (double)n*log10(2);
	double intpart, frac;
	frac = modf(val, &intpart);
	double mod = MOD;
	double v = pow(10.0, frac)*mod;
	frac = modf(v, &intpart);
	return intpart;
}

int main(){
	long long int test, n, k;
	scanf("%lld",&test);
	while(test--){
		scanf("%lld %lld",&n,&k);
		MOD = pow(10,k);
		long long int end = expt(2, n-1);
		MOD = pow(10,k-1);
		long long int start = (long long int)first(n-1);
		long long int ans = end+start;
		printf("%lld\n", ans);
	}
	return 0;
}