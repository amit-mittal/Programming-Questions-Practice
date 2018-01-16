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
		char a[100005];
		ll int m, n;
		ss(a);
		sll(m), sll(n);
		ll len = strlen(a);
		cout << len << endl;
		if(m>n){
			ll m1 = len;
			ll count = 0;
			for(int i=0;i<len;++i){
				if(a[i]=='a')
					++count;
				else{
					if(count>=m){
						ll times = count/m;
						m1 = m1 - (times*(m-n));
					}
					count = 0LL;
				}
			}
			if(count>=m){
				ll times = count/m;
				m1 = m1 - (times*(m-n));
			}
			printf("%lld %lld\n", m1, len);
		} else if(m<n){
			ll m1 = len;
			ll count = 0;
			for(int i=0;i<len;++i){
				if(a[i]=='a')
					++count;
				else{
					if(count>=m){
						ll times = count/m;
						m1 = m1 + (times*(n-m));
					}
					count = 0;
				}
			}
			if(count>=m){
				ll times = count/m;
				m1 = m1 + (times*(n-m));
			}
			printf("%lld %lld\n", len, m1);
		} else {
			printf("%lld %lld\n", len, len);
		}
	}
	return 0;
}