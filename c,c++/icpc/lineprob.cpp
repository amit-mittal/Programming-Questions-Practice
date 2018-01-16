#include <iostream>
#include <cstdio>

using namespace std;

#define ll long long
#define mod(n) ((n>0)?n:-n)

ll int gcd(ll int a, ll int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

int main(){
	ll int test, a, b, x, y;
	scanf("%lld", &test);

	while(test--){
		scanf("%lld %lld %lld %lld", &x, &y, &a, &b);
		ll int v1 = x-a;
		v1 = mod(v1);
		ll int v2 = b-y;
		v2 = mod(v2);

		if(v1==0 || v2==0){
			printf("0\n");
			continue;
		}

		ll int hcf = gcd(v1, v2);
		printf("%lld\n", v1+v2-hcf);
	}
	return 0;
}