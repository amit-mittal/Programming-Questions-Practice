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

int main() {
	int n, k;
	s(n), s(k);

	int total = n*(n-1)/2;
	if(n*k <= n*(n-1)/2){
		printf("%d\n", n*k);
		
		for(int i=1;i<=n;++i){
			int count = k;
			for(int j=1;j<=n;++j){
				if(i == j)
					continue;
					
				if(count == 0)
					break;
					
				if(a[i][j] == 0){
					--count;
					printf("%d %d\n", i, j);
					a[i][j] = 1;
					a[j][i] = 1;
				}
			}
		}
	} else {
		printf("-1\n");
	}
	
	return 0;
}