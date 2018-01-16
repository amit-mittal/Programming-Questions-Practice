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

ll a[16];
ll l, r, n, ans;
int m;

void solve(int size, int index, ll pro){
	if(index == m){
		if(size == 0)
			return;
		
		if(size & 1){// odd
			ans+=((r/pro) - ((l-1)/pro));
		} else {// even
			ans-=((r/pro) - ((l-1)/pro));
		}
		return;
	}
	
	solve(size, index+1, pro);
	solve(size+1, index+1, pro*a[index]);
}

int main() {
	int q;
	
	sll(n), s(m);
	for(int i=0;i<m;++i)
		sll(a[i]);
	
	s(q);
	while(q--){
		ans = 0LL;
		sll(l), sll(r);
		
		solve(0, 0, 1LL);
		printf("%lld\n", ans);
	}
	
	return 0;
}