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
	int test, n, r, R;
	s(test);
	while(test--){
		vector< pair<int, pair<int, int> > > v;
		s(n);
		for(int i=0;i<n;++i){
			s(r), s(R);
			v.push_back(make_pair(r, make_pair(R, i+1)));
		}
		sort(v.begin(), v.end(), greater< pair<int, pair<int, int> > >());
		int val = v[0].first;
		bool ans = true;
		for(int i=1;i<n;++i){
			if(v[i].second.first>val)
				ans = false;
		}
		if(ans)
			printf("%d\n", v[0].second.second);
		else
			printf("-1\n");
	}
	return 0;
}
