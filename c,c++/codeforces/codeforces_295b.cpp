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

int a[500][500];
int b[500];
int val[500];

int main() {
	int n, t;
	
	s(n);
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			s(a[i][j]);
		}
	}
	
	for(int i=0;i<n;++i)
		s(b[i]), --b[i];
	
	ll ans[500] = {0LL};
	for(int k=n-1;k>=0;--k){
		val[b[k]] = 1;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(a[i][j] > a[i][b[k]]+a[b[k]][j])
					a[i][j] = a[i][b[k]]+a[b[k]][j];
				
				if(val[i] && val[j])
					ans[k] += (ll)a[i][j];
			}
		}
	}
	
	for(int i=0;i<n;++i)
		printf("%lld ", ans[i]);
	
	return 0;
}