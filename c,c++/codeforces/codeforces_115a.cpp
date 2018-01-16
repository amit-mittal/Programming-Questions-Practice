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
int a[2005];
int visit[2005];

int level(int index){
	int count = 1;
	while(a[index] != -1){
		index = a[index];
		++count;
	}
	
	return count;
}

int main() {
	s(n);
	for(int i=1;i<=n;++i)
		s(a[i]);
		
	int ans = 1;
	for(int i=1;i<=n;++i){
		if(a[i] != -1)
			ans = max(ans, level(i));
	}
	
	printf("%d\n", ans);
		
	return 0;
}