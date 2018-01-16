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

int n, m;
int degree[100005];

int main() {
	int m;
	s(n), s(m);
	
	for(int i=0;i<m;++i){
		int x, y;
		s(x), s(y);
		++degree[x];
		++degree[y];
	}
	
	int maxD = degree[1];
	int minD = degree[1];
	for(int i=2;i<=n;++i){
		maxD = max(maxD, degree[i]);
		minD = min(minD, degree[i]);
	}
	
	if(maxD == 2 && minD == 2){
		printf("ring topology\n");
	} else {
		int count_max = 0;
		int count_min = 0;
		for(int i=1;i<=n;++i){
			if(degree[i] == maxD)
				++count_max;
			if(degree[i] == minD)
				++count_min;
		}
		
		if(count_max == 1 && count_min == n-1 && maxD == n-1 && minD == 1){
			printf("star topology\n");
		} else if(count_max == n-2 && count_min == 2 && maxD == 2 && minD == 1){
			printf("bus topology\n");
		} else {
			printf("unknown topology\n");
		}
	}
	
	return 0;
}