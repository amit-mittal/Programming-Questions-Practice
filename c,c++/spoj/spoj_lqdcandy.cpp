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

int main() {
	int test;
	s(test);
	while(test--){
		ll n;
		sll(n);
		int m1 = 0, m2 = 0;
		ll v = 1;
		while((v&n)==0){
			v <<= 1;
			++m1;
		}
		m2 = m1;
		while(v<n){
			v <<= 1;
			++m2;
		}
		printf("%lld %d\n", v, m2-m1);
	}
	return 0;
}

