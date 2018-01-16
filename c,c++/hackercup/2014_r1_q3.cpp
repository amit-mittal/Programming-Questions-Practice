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
#define sd(a) scanf("%lf",&a)
#define p(a) printf("%d",a)
#define pll(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

int main() {
	int test, k;
	s(test);
	for(int t=1;t<=test;++t){
		double ps, pr;
		double pi, pu, pw, pd, pl;
		double dp[105][2][2];

		s(k), sd(ps), sd(pr), sd(pi);
		sd(pu), sd(pw), sd(pd), sd(pl);

		dp[1][1][1] = pi;
		dp[1][0][1] = pi;
		dp[1][1][0] = (pi*ps) + ((1.0-pi)*pr);
		dp[1][0][0] = 1.0 - dp[1][1][0];

		for(int i=2;i<=(2*k)-1;++i){
			double sun = (dp[i-1][1][0]*(dp[i-1][1][1] + (pu*pw))) + (dp[i-1][0][0]*(dp[i-1][0][1] - (pd*pl)));
			if(sun>1.0)
				sun = 1.0;
			if(sun<0.0)
				sun = 0.0;

			double rain = 1.0 - sun;
			dp[i][1][0] = (sun*ps) + (rain*pr);
			dp[i][0][0] = 1.0 - dp[i][1][0];
			dp[i][1][1] = sun;
			dp[i][0][1] = sun;
		}

		double sum = 0.0;
		for(int i=k;i<=(2*k)-1;++i){
			sum+=dp[i][1][0];
		}
		sum = (double)sum/k;

		double val = (dp[1][1][0]*dp[2][1][0]) + (dp[1][1][0]*dp[2][0][0]*dp[3][1][0]) + (dp[1][0][0]*dp[2][1][0]*dp[3][1][0]);
		cout<<val<<endl;

		printf("Case #%d: %lf\n", t, sum);
	}
	return 0;
}
