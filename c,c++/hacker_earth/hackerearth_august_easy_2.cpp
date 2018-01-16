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
	int test, food, gold, sa, p, c, lal;
	
	s(test);
	while(test--){
		s(food), s(gold), s(sa), s(p), s(c), s(lal);
		food/=25;
		gold/=50;
		
		int dp[1601][801] = {0};
		for(int i=0;i<=food;++i){
			dp[i][0] = ((i/4)*sa);
		}
		
		for(int i=0;i<=gold;++i){
			dp[0][i] = 0;
		}
		
		for(int i=1;i<=food;++i){
			for(int j=1;j<=gold;++j){
				if(i>=4){
					dp[i][j] = max(dp[i][j], dp[i-4][j] + sa);
				}
				if(i>=5 && j>=1){
					dp[i][j] = max(dp[i][j], dp[i-5][j-1] + p);
				}
				if(i>=2 && j>=2){
					dp[i][j] = max(dp[i][j], dp[i-2][j-2] + c);
				}
			}
		}
		
		if(dp[food][gold] > lal)
			printf("%d\n", dp[food][gold] - lal);
		else
			printf("-1\n");
	}
	
	return 0;
}