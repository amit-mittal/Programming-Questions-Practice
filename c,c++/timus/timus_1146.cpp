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

int main() {
	int n, val;
	int sum[105][105];
	
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		sum[i][0] = 0;
		for(int j=0;j<n;++j){
			scanf("%d", &val);
			sum[i][j+1] = sum[i][j] + val;
		}
	}
	
	int ans = -100000000;
	for(int i=0;i<n;++i){
		for(int j=i;j<n;++j){
			int curr = 0;
			for(int k=0;k<n;++k){
				if(curr>=0){
					curr+=(sum[k][j+1]-sum[k][i]);
				} else {
					curr = 0;
					curr+=(sum[k][j+1]-sum[k][i]);
				}
				ans = max(ans, curr);
			}
			//cout<<"i: "<<i<<" j: "<<j<<" ans: "<<ans<<endl;
		}
	}
	printf("%d\n", ans);
	return 0;
}