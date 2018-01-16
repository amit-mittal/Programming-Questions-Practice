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
#define MOD 65536

int main() {
	ll seed, mul, add, n, k;
	sll(seed), sll(mul), sll(add), sll(n), sll(k);
	
	vector<ll> temp;
	vector<ll> a;
	vector<ll> heap1, heap2;

	temp.push_back(seed);
	a.push_back(seed);
	for(int i=1;i<k;++i){
		seed = ((seed*mul) + add)%MOD;
		temp.push_back(seed);
		a.push_back(seed);
	}
	sort(temp.begin(), temp.end());

	ll median = temp[(k-1)/2];
	ll sum = median;
	for(int i=0;i<(k-1)/2;++i){
		heap1.push_back(temp[i]);
	}
	for(int i=((k-1)/2)+1;i<k;++i){
		heap2.push_back(temp[i]);
	}
	make_heap(heap1.begin(), heap1.end(), greater<ll>());
	make_heap(heap2.begin(), heap2.end());
	
	for(int i=0;i<k;++i)
		pll(temp[i]), nline;

	return 0;
}
