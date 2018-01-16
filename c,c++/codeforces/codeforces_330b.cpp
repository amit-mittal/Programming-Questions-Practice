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

int n, c;
int a[2005];

int main() {
	s(n), s(c);
	for(int i=0;i<c;++i){
		int x, y;
		s(x), s(y);
		++a[x], ++a[y];
	}

	int ans;
	for(int i=1;i<=n;++i){
		if(a[i] == 0){
			ans = i;
			break;
		}
	}
	
	printf("%d\n", n-1);
	for(int i=1;i<=n;++i){
		if(i != ans)
			printf("%d %d\n", ans, i);
	}
		
	return 0;
}