#include <iostream>
#include <cstdio>

using namespace std;
#define ll long long

int n;
ll a[1005];
ll sum[1005];
ll dp[1001][1001][2];

ll solve(int s, int e, int turn){
	if(dp[s][e][turn]!=-1)
		return dp[s][e][turn];
	if(s>e)
		return 0LL;
	
	if(s==e){
		ll val = a[s];
		dp[s][e][turn] = val;
		return dp[s][e][turn];
	}	
	
	ll val = max(a[s] + sum[e+1] - sum[s+1] - solve(s+1, e, (turn+1)%2), a[e] + sum[e] - sum[s] - solve(s, e-1, (turn+1)%2));
	dp[s][e][turn] = val;
	
	return dp[s][e][turn];
}

int main() {
	scanf("%d", &n);
	
	sum[0] = 0LL;
	for(int i=0;i<n;++i){
		scanf("%lld", &a[i]);
		sum[i+1] = sum[i] + a[i];
	}
	
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			dp[i][j][0] = -1;
			dp[i][j][1] = -1;
		}
	}
	
	ll ans = solve(0, n-1, 0);
	printf("%lld %lld\n", ans, sum[n] - ans);
	
	return 0;
}