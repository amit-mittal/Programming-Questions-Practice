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

vector< vector<pii> > v;
vvi a;
int dist[100005];
int pdist[100005];

int main() {
	int n, m;
	
	s(n), s(m);
	
	v.resize(n);
	a.resize(n);
	
	for(int i=0;i<m;++i){
		int x, y, w;
		s(x), s(y), s(w);
	
		v[x-1].pb(mp(y-1, w));
		v[y-1].pb(mp(x-1, w));
	}
	
	for(int i=0;i<n;++i){
		int c;
		dist[i] = 1000000000;
		pdist[i] = 1000000000;
		
		s(c);
		for(int j=0;j<c;++j){
			int t;
			s(t);
			
			a[i].pb(t);
		}
		
		sort(a[i].begin(), a[i].end());
	}
	
	queue<pii> q;
	pdist[0] = 0;
	int new_dist1 = 0;
	if(a[0].size() > 0){
		vi::iterator it = lower_bound(a[0].begin(), a[0].end(), new_dist1);
		while(it != a[0].end() && *it == new_dist1){
			++it;
			++new_dist1;
		}
	}
	dist[0] = new_dist1;
	q.push(mp(0, dist[0]));
	
	while(!q.empty()){
		pii p = q.front();
		q.pop();
		
		int ver = p.fi;
		int efftime = p.se;
		
		for(int j = 0 ; j < v[ver].size() ; ++j){
			int next_ver = v[ver][j].fi;
			int ver_w = v[ver][j].se;
			
			int new_dist = efftime + ver_w;
			if(dist[next_ver] > new_dist){
				int old = new_dist;
				
				if(a[next_ver].size() > 0){
					vi::iterator it = lower_bound(a[next_ver].begin(), a[next_ver].end(), new_dist);
					while(it != a[next_ver].end() && *it == new_dist){
						++it;
						++new_dist;
					}
				}
				
				if(dist[next_ver] > new_dist){
					pdist[next_ver] = old;
					dist[next_ver] = new_dist;
					q.push(mp(next_ver, new_dist));
				}
			}
		}
	}
	
	if(pdist[n-1] == 1000000000)
		printf("-1\n");
	else
		printf("%d\n", pdist[n-1]);
	
	return 0;
}