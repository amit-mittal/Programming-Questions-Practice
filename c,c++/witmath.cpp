#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

#define s(a) scanf("%d",&a)
#define lls(a) scanf("%lld",&a)
#define ll long long

//with this algo may be have to use big integer library so use java
int isPrime(ll int q){
	if(q==2)
		return 1;

	ll int n = q;
	ll int p = 2;
	ll int r = 1;
	q--;
	while (q != 0) {
		if (q % 2 == 1) {
			r *= p;
			q--;

			if(r>=n)
				r %= n;
		}
		p *= p;
		q /= 2;

		if(p>=n)
			p %= n;
//		printf("%lld %lld %lld\n", n, r, p);
	}

//	printf("%lld %lld\n", n, r);
	if(r == 1)
		return 1;
	else
		return 0;
}

int main() {
	int test;
	ll int n;
	s(test);
	while(test--){
		ll int ans = -1;
		lls(n);
		if(n%2==0)
			n--;

		for(ll int i=n;i>=3;i-=2){
			if(isPrime(i)){
				ans = i;
				break;
			}
		}

		if(ans==-1)
			ans = 2;

		printf("%lld\n", ans);
	}
	return 0;
}
