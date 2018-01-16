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

int a[1001][1001];
int b[1001][1001];

int main() {
	int n, m, q, x, y, p;
	
	s(n), s(m), s(q);
	for(int i=0;i<q;++i){
		s(x), s(y), s(p);
		a[x][y] = p;
	}
	
	for(int i=0;i<m;++i)
		b[n-1][i] = a[n-1][i];
	
	for(int i=n-2;i>=0;--i){
		for(int j=0;j<m;++j){
			int val = a[i][j] + b[i+1][j];
			if(j>0){
				val = max(val, a[i][j] + b[i+1][j-1]);
			}
			if(j<m-1){
				val = max(val, a[i][j] + b[i+1][j+1]);
			}
			b[i][j] = val;
		}
	}
	
	int ans = -1;
	for(int i=0;i<m;++i)
		ans = max(ans, b[0][i]);
		
	printf("%d\n", ans);
	
	return 0;
}