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

int main(){
	int test, n, k;
	s(test);
	while(test--){
		s(n), s(k);
		int m[1005], g[1005];
		for(int i=0;i<n;++i)
			s(m[i]);
		for(int i=0;i<n;++i)
			s(g[i]);
		sort(m, m+n);sort(g, g+n, greater<int>());
		int sum = 0;
		for(int i=0;i<n;++i){
			sum+=(m[i]*g[i]);
		}
		if(sum<=k)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}