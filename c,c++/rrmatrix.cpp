#include <iostream>
#include <cstdio>

using namespace std;

#define s(n) scanf("%lld", &n)
#define ll long long

ll int gcd(ll int a, ll int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

int main(){
	ll int test, row, col;

	s(test);
	while(test--){
		s(row), s(col);
		if(row==1 || col==1){
			printf("%d\n", row*col);
		} else {
			ll int lcm = (row*col)/gcd(row, col);
			
		}
	}
	
	return 0;
}