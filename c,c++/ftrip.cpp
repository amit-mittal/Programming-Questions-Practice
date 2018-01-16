//Author: KewlJerk
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define lls(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define llp(a) printf("%lld",a)
#define sp(a) printf("%s",a)
#define cp(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

ll int comb(int n, int r){
	if(r>n || r<0)
		return 0;

	ll int numerator = 1; // n * (n-1) * ... * (n-k+1)
	for (ll int i=0; i<r; i++) {
		numerator = (numerator * (n-i) );
	}
	
	ll int denominator = 1; // k!
	for (ll int i=1; i<=r; i++) {
		denominator = (denominator * i);
	}
}

int main() {
	int test, s, n, m, k;
	s(test);
	while(test--){
		s(s), s(n), s(m), s(k);

	}
	return 0;
}
