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

int n;
int visit[105];
int a[105][105];
vii v;

void dfs(int index){
	visit[index] = 1;
	for(int i=0;i<n;++i){
		if(a[index][i] == 1 && visit[i] == 0){
			dfs(i);
		}
	}
}

int main() {
	s(n);
	for(int i=0;i<n;++i){
		int x, y;
		s(x), s(y);
		v.pb(mp(x, y));
	}
	
	for(int i=0;i<n;++i){
		for(int j=0;j<i;++j){
			if(v[i].fi == v[j].fi){
				a[i][j] = 1;
				a[j][i] = 1;
			}
			
			if(v[i].se == v[j].se){
				a[i][j] = 1;
				a[j][i] = 1;
			}
		}
	}

	int counter = 0;
	for(int i=0;i<n;++i){
		if(visit[i] == 0){
			dfs(i);
			++counter;
		}
	}
	
	printf("%d\n", counter-1);
		
	return 0;
}