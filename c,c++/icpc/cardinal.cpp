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

ll int n;
ll int a[105];
ll int dp[1036][105];
ll int b[1036][105];

ll int solve(ll int index, ll val){
	if(index<0)
		return 0;

	if(dp[index][val]!=-1)
		return dp[index][val];

	dp[index][val] = solve(index-1, val);

	ll int v = a[index];
	ll newval = val;
	bool f = true;
	while(v>0){
		int r = v%10;
		ll int num = 1<<r;
		
		num = num&val;
		if(num!=0){
			f = false;
			break; 
		}
		num = 1<<r;
		newval = newval|num;
		v = (ll)v/10;
	}
	
	if(f){
		ll int newans = a[index] + solve(index-1, newval);
		if(newans>=dp[index][val]){
			dp[index][val] = newans;
			b[index][newval] = b[index][val] + 1;
		}
	}

	return dp[index][val];
}

int main() {
	while(scanf("%lld", &n)){
		for(int i=0;i<n;++i){
			sll(a[i]);
		}

		for(int i=0;i<n;++i){
			for(int j=0;j<1026;++j){
				dp[i][j] = -1;
				b[i][j] = 0;
			}
		}

		solve(n-1, 0LL);

		ll int m = -1;
		for(int i=0;i<=1024;++i){
			if(b[n-1][i]>m){
				m = b[n-1][i];
			}
		}

		printf("%lld\n", m);
	}
	return 0;
}