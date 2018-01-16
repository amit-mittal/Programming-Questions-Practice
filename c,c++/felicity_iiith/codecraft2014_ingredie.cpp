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
#define MAX 100000000

int main() {
	int n, m, a, b, x, y, c, total;
	int s[10];
	ll gr[105][105];
	s(n), s(m);
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			gr[i][j] = MAX;
			
	for(int i=0;i<m;++i){
		s(x), s(y), s(c);
		gr[x][y] = (ll)c;
		gr[y][x] = (ll)c;
	}
	s(total);
	for(int i=0;i<total;++i)
		s(s[i]);
	s(a), s(b);
	
	//floyd-warshall
	for(int k=0;k<n;++k){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if((gr[i][k]+gr[k][j])<gr[i][j]){
					gr[i][j] = gr[i][k]+gr[k][j];
				}
			}
		}
	}
	
	ll ans = 0LL;
	vector< pair<ll, pair<int, int> > > v;
	for(int t=0;t<total;++t){
		v.clear();
		for(int i=0;i<n;++i){
			v.push_back(make_pair(gr[a][i], make_pair(a, i)));
			v.push_back(make_pair(gr[b][i], make_pair(b, i)));
		}
		sort(v.begin(), v.end());
		
		for(int i=0;i<v.size();++i){
			pair<ll, pair<int, int> > p = v[i];
			int dest = p.second.second;
			bool found = false;
			for(int k=0;k<total;++k){
				if(s[k]==dest){
					found = true;
					s[k] = -1;
				}
			}
			
			if(!found){
				continue;
			} else {
				ans+=p.first;
				if(p.second.first==a)
					a = dest;
				else
					b = dest;
				break;
			}
		}
	}
	printf("%lld\n", ans);
	
	return 0;
}
