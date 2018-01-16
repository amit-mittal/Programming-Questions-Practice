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
	int n;
	ll a[100005];

	s(n);
	for(int i=0;i<n;++i)
		sll(a[i]);
	sort(a, a+n, greater<ll>());
	
	ll bit = 1;
	while(bit<=a[0])
		bit<<=1;
	bit>>=1;

	for(int l = 0;bit>=1;bit>>=1){
		int i = l;
		while(i<n && (bit&a[i])==0)
			++i;
		if(i>=n)
			continue;
		swap(a[l], a[i]);
		for(int j=0;j<n;++j){
			if(j!=l && (a[j]&bit)!=0)
				a[j] ^= a[l];
		}
		++l;
	}

	ll ans = 0;
	for(int i=0;i<n;++i){
		ans = ans^a[i];
	}

	pll(ans);
	nline;
	
	return 0;
}
