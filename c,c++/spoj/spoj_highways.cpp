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

vector<vii> v;
int n, m, s, e;

int dijkstra(){
	int dist[100005];
	for(int i=0;i<=n;++i)
		dist[i] = -1;
	priority_queue<pii, vii, greater<pii> > q;
	q.push(mp(0, s));
	while(!q.empty()){
		pii p = q.top();
		q.pop();

		int ver = p.se;
		int d = p.fi;
		if(dist[ver] != -1)
			continue;
		if(ver == e)
			return d;
		dist[ver] = d;
		for(int i=0;i<v[ver].size();++i){
			q.push(mp(d+v[ver][i].se, v[ver][i].fi));
		}
	}
	return -1;
}

int main() {
	int test, x, y, w;
	s(test);
	while(test--){
		v.clear();
		s(n), s(m), s(s), s(e);
		v.resize(n+1);
		for(int i=0;i<m;++i){
			s(x), s(y), s(w);
			v[x].pb(mp(y, w));
			v[y].pb(mp(x, w));
		}
		int ans = dijkstra();
		if(ans == -1){
			printf("NONE\n");
		} else {
			printf("%d\n", ans);
		}
	}
	return 0;
}
