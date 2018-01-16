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

int a[3001][3001];

int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

int main() {
	int n, x;
	ll b[3001] = {0LL};
	
	s(n);
	for(int i=0;i<n;++i){
		s(x);
		++b[x];
	}
	
	ll ans = 0LL;
	for(int i=1;i<=3000;++i){
		for(int j=1;j<i;++j){
			a[i][j] = gcd(i, j);
			a[j][i] = a[i][j];
			if(b[i]>0 && b[j]>0 && a[i][j]>1){
				ans+=(ll)(b[i]*b[j]);
			}
		}
	}
	
	for(int j=1;j<=3000;++j){
		if(b[j]>1){
			ans+=(ll)(b[j]*(b[j]-1))/2;
		}
	}
	
	printf("%lld\n", ans);
	
	return 0;
}