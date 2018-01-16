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
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define pll(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

ll int func(ll int n){
	if(n==1)
		return 0;
	ll int ans = 0;
	if(n%3==0){
		ll int x = n/3;
		ll int y = n-x;
		return ((x*y)+func(x)+func(y));
	}else if(n%2==0){
		ll int x = n/2;
		ll int y = n-x;
		return ((x*y)+func(x)+func(y));
	}else{
		ll int x = 1;
		ll int y = n-x;
		return ((x*y)+func(x)+func(y));
	}
}

int main() {
	ll int n, test;
	sll(test);
	while(test--){
		ll int ans = 0;
		sll(n);
		ans = func(n);
		pll(ans);
		nline;
	}
	return 0;
}