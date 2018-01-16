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
	int n;
	unsigned ll dp[50][2];
	scanf("%d", &n);
	dp[1][0] = 0LL;
	dp[1][1] = 2LL;
	for(int i=2;i<=n;++i){
		dp[i][0] = dp[i-1][1];
		dp[i][1] = (dp[i-1][0] + dp[i-1][1]);
	}
	printf("%llu", dp[n][1]);
	return 0;
}