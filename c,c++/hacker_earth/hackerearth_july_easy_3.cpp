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

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
#define mod 1000000007
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second

int main() {
	int test, m, n, k;
	
	s(test);
	while(test--){
		s(m), s(n), s(k);
		double dp[51][10001] = {0};
		
		for (int j = 1; j <= n && j <= k; j++)
            dp[1][j] = (double)1/n;
		
		for(int i=2;i<=m;++i){
			for(int j=1;j<=k;++j){
				for(int l=1;l<=n && l<=j;++l){
					dp[i][j] = dp[i-1][j-l] + dp[i][j];
				}
				dp[i][j] = (double)dp[i][j]/n;
			}
		}
		
		int count = 0;
		while(((int)dp[m][k])%10 == 0){
			dp[m][k] = dp[m][k]*10.0f;
			++count;
		}
		
		printf("%.3lf %d\n", dp[m][k], count);
	}
	
	return 0;
}