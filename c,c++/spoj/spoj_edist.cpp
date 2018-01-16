#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <string>
using namespace std;

string a, b;
int dp[2001][2001];

int main() {
	int test;
	scanf("%d", &test);
	while(test--){
		cin >> a >> b;
		int l1 = a.size();
		int l2 = b.size();
		a = " "+a;
		b = " "+b;
		dp[0][0] = 0;
		for(int i=1;i<=l2;++i)
			dp[0][i] = i;
		for(int i=1;i<=l1;++i)
			dp[i][0] = i;
		for(int i=1;i<=l1;++i){
			for(int j=1;j<=l2;++j){
				if(a[i]==b[j]){
					dp[i][j] = dp[i-1][j-1];
				} else {
					dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
				}
			}
		}
		cout<<dp[l1][l2]<<endl;
	}
	
	return 0;
}