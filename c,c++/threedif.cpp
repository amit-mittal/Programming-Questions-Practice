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

int main() {
	ll int test, a[3];
	sll(test);
	while(test--){
		sll(a[0]), sll(a[1]), sll(a[2]);
		sort(a,a+3);
		ll int ans = ((a[0]%mod)*((a[1]-1)%mod))%mod;
		ans = (ans*((a[2]-2)%mod))%mod;
		pll(ans), nline;
	}
	return 0;
}