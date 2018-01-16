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

int a[301][301];

int main() {
	int n, q, x1, x2, y1, y2;
	s(n);
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j)
			s(a[i][j]);
	}
	s(q);
	while(q--){
		int count[12]={0};
		s(x1), s(y1), s(x2), s(y2);
		for(int i=x1;i<=x2;++i){
			for(int j=y1;j<=y2;++j){
				count[a[i][j]] = 1;
			}
		}
		int ans = 0;
		for(int i=1;i<=10;++i)
			ans+=count[i];
		p(ans), nline;
	}
	return 0;
}
