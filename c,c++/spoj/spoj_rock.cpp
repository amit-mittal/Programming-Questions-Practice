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

char a[205];

int solve(int n){
	int dp[205];
	
	dp[0] = 0;
	/*if(a[1]=='1')
		dp[0] = 1;
	else
		dp[0] = 0;
	*/
	for(int i=1;i<=n;++i){
		dp[i] = dp[i-1];
		
		int count1 = 0;
		int count0 = 0;
		for(int j=i-1;j>=0;--j){
			if(a[j]=='1')
				count1++;
			else
				count0++;
				
			if(count1>count0)
				dp[i] = max(dp[i], dp[i-count0-count1]+count0+count1);
		}
	}
	
	int ans = -1;
	for(int i=0;i<=n;++i)
		ans = max(ans, dp[i]);
	return ans;
}

int main() {
	int test, n;
	s(test);
	while(test--){
		s(n);
		ss(a);
		printf("%d\n", solve(n));
	}
	return 0;
}