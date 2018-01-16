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

ll a, b, n;

ll gcd(ll a, ll b){
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

int main() {
	int test;
	
	s(test);
	while(test--){
		sll(a), sll(b), sll(n);
		
		ll lcm = a*b/gcd(a, b);
		
		ll left = 1LL;
		ll right = 1000000000000000LL;
		while(left<=right){
			ll mid = (left+right)/2;
			
			ll val = (mid/a) + (mid/b) - (mid/lcm);
			if(val == n){
				ll ans = max((mid/a)*a, (mid/b)*b);
				printf("%lld\n", ans);
				break;
			} else if(val < n){
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}
	}
	
	return 0;
}