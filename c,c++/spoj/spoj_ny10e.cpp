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

ll dp[65][11];
void pre(){
	for(int i=0;i<=9;++i)
		dp[1][i] = 1LL;
	for(int i=2;i<=64;++i){
		dp[i][0] = dp[i-1][0];
		for(int j=1;j<=9;++j){
			dp[i][j] = dp[i][j-1] + dp[i-1][j];
		}
	}
	for(int i=1;i<=64;++i){
		for(int j=0;j<=9;++j){
			dp[i][10]+=dp[i][j]; 
		}
	}
}

int main() {
	pre();
	int test, c, n;
	s(test);
	while(test--){
		s(c), s(n);
		printf("%d %lld\n", c, dp[n][10]);
	}
	return 0;
}