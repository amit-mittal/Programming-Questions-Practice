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

double dp[1005][1005];
int w[1005][1005];

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	for(int i=0;i<k;++i){
		int x, y;
		s(x), s(y);
		w[y-1][x-1] = 1;
	}
	for(int i=0;i<=n;++i)
		dp[0][i] = (double)i;
	for(int i=0;i<=m;++i)
		dp[i][0] = (double)i;
	for(int x=1;x<=n;++x){
		for(int y=1;y<=m;++y){
			dp[y][x] = min(dp[y][x-1]+1.0f, dp[y-1][x]+1.0f);
			if(w[y-1][x-1] == 1){
				dp[y][x] = min(dp[y][x], dp[y-1][x-1]+1.4142f);
			}
		}
	}
	int ans = (int)(dp[m][n]*1000.0f);
	if(ans%10>=5){
		ans = ans/10;
		++ans;
	} else
		ans = ans/10;
	printf("%d\n", ans);
	return 0;
}