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
	int test, n;
	s(test);
	while(test--){
		vi v;
		
		s(n);
		v.resize(n);
		
		for(int i=0;i<n;++i){
			s(v[i]);
		}
		sort(v.begin(), v.end());
		
		int mcount = -1;
		int count = 1;
		for(int i=1;i<n;++i){
			if(v[i] == v[i-1]){
				++count;
			} else {
				mcount = max(mcount, count);
				count = 1;
			}
		}
		mcount = max(mcount, count);
		
		printf("%d\n", mcount);
	}
	return 0;
}