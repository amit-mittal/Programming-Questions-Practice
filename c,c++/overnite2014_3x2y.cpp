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

ll f(ll x, ll y){
	if(x ==0 && y==0)
		return 0LL;
	ll r1 = x%3;
	ll r2 = y%3;
	if(r1==0 && r2==0)
		return f(x/3, y/2);
	else if(r1==0 && r2==1)
		return (f(x/3, y/2)+1);
	else if(r1==1 && r2==0)
		return (f(x/3, y/2)+1);
	else if(r1==1 && r2==1)
		return (f(x/3, y/2)+2);
	else if(r1==2 && r2==0)
		return (f(x/3, y/2));
	else
		return (f(x/3, y/2)+1);
}

int main(){
	int test, n, k;
	s(test);
	while(test--){
		ll x, y;
		sll(x), sll(y);
		printf("%lld\n", f(x, y));
	}
	return 0;
}