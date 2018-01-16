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
#define FOR(i,a,b) for(i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define lls(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define llp(a) printf("%lld",a)
#define sp(a) printf("%s",a)
#define cp(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

int main() {
	int test, n, a[105];
	s(test);
	while(test--){
		s(n);
		for(int i=0;i<n;++i){
			s(a[i]);
		}
		sort(a, a+n);
		int sum = 0;
		for(int i=0;i<n;++i){
			sum+=(a[n-1] - a[i]);
		}
		int k = a[n-1]-a[0];
		int ans = n*k - sum;
		printf("%d\n", ans);
	}
	return 0;
}