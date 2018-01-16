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
#include <utility>

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

int main() {
	int test;
	s(test);
	while(test--){
		ll x, y;
		sll(x), sll(y);
		ll n = min(x, y);
		
		ll ans = (x+1LL)*(y+1LL)*n;
		ans+=((n*(n+1)*((2*n)+1))/6);
		ans-=(((x+y+2)*(n+1)*n)/2);
		ans*=4LL;
		
		if(ans<0)
			ans = 0;
		pll(ans), nline;
	}
	return 0;
}
