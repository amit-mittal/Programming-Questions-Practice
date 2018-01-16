#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)
#define ll long long 

using namespace std;

int main(){
	int test;
	int n,m;
	s(test);
	while(test--){
		s(m),s(n);
		ll int val = (ll)((m-1)*n)/2;
		val*=2;
		printf("%lld\n", val);
	}
	return 0;
}