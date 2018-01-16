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
	ll int test, n, p, k;
	sll(test);
	while(test--){
		sll(n), sll(p), sll(k);
		if(n==0){
			printf("0\n");
			continue;
		}
		if(p==0){
			pll(n), nline;
			continue;
		}
		if(k==0){
			if(p>=n)
				p(0), nline;
			else
				pll(n-p), nline;
			continue;
		}

		ll ans = k*(k+1);
		ans = (ll)ans/2;
		ans = (ll)ans + p;
		if(ans>=n){
			printf("0\n");
		} else {
			printf("%lld\n", n - ans);
		}
	}
	return 0;
}
