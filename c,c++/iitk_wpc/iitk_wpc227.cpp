#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define MOD 1000000007
#define ll long long
#define s(n) scanf("%d", &n)

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int x, y, n, m;
		bool can[22][22]={0};
		ll dp[1 << 17];

		scanf("%d", &n);
		scanf("%d", &m);
		for(int i=0;i<m;++i){
			s(x), s(y);
			can[x][y] = 1;
		}

		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for(int s=0;s< 1<<n;++s){
			for(int i=0;i<n;++i) if(s >> i & 1){
				bool ok = 1;
				for(int j=0;j<n;++j) if(i != j) if(s >> j & 1){
					if(can[j][i]) ok = 0;
				}
				if(ok){
					int t = s^(1 << i);
					dp[s] += dp[t];
					if(dp[s]>=MOD)
						dp[s]%=MOD;
				}
			}
		}
		printf("%lld\n", dp[(1<<n)-1]);
	}

	return 0;
}