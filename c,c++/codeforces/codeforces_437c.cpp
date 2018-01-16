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
vvi v;
int a[1005];

int find_max(){
	int index = 0;
	for(int i=1;i<n;++i){
		if(a[i] > a[index])
			index = i;
	}
	
	return index;
}

int main() {
	int m;
	s(n), s(m);
	
	v.resize(n);
	for(int i=0;i<n;++i)
		s(a[i]);
	
	while(m--){
		int x, y;
		s(x), s(y);
		
		v[x-1].pb(y-1);
		v[y-1].pb(x-1);
	}
	
	int ans = 0;
	for(int i=0;i<n;++i){
		int index = find_max();
		
		for(int j=0;j<v[index].size();++j){
			ans += a[v[index][j]];
		}
		
		a[index] = 0;
	}
	
	printf("%d\n", ans);
	
	return 0;
}