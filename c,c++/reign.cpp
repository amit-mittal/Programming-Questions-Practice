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

#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define pll(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

int main() {
	int test;
	s(test);
	while(test--){
		ll a[100005];
		int n, k;
		s(n), s(k);
		for(int i=0;i<n;++i)
			sll(a[i]);
		
		ll curr = 0LL;
		ll curr_max = -1000000100;
		ll max_end[100005];
		for(int i=0;i<n;++i){
			curr+=a[i];
			curr_max = max(curr, curr_max);
			max_end[i] = curr_max;
			if(curr<0)
				curr = 0;
		}
		//printing stuff
		/*for(int i=0;i<n;++i){
			pll(max_end[i]), space;
		}nline;*/
		
		curr = 0LL;
		curr_max = -1000000100;
		ll max_start[100005];
		for(int i=n-1;i>=0;--i){
			curr+=a[i];
			curr_max = max(curr, curr_max);
			max_start[i] = curr_max;
			if(curr<0)
				curr = 0;
		}
		//printing stuff
		/*for(int i=0;i<n;++i){
			pll(max_start[i]), space;
		}nline;*/
		
		ll ans = max_end[0]+max_start[k+1];
		for(int i=1;i<(n-k-1);++i){
			ans = max(ans, max_end[i]+max_start[i+k+1]);
		}
		
		pll(ans), nline;
	}
	return 0;
}
