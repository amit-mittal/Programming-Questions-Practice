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
	int n, s, e;
	vector< pair<int, int> > v;
	
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		s(s), s(e);
		v.push_back(make_pair(e, s));
	}
	sort(v.begin(), v.end());
	
	int last = 0;
	int ans = 0;
	for(int i=0;i<n;++i){
		if(v[i].second>last){
			++ans;
			last = v[i].first;
		}
	}
	printf("%d\n", ans);
	return 0;
}