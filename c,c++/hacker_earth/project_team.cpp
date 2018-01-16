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
	int test, a[102],n,b[51];
	s(test);
	while(test--){
		s(n);
		int mid = n/2;
		for(int i=0;i<n;++i){
			s(a[i]);
		}
		sort(a, a+n);
		for(int i=0;i<mid;++i){
			b[i] = a[i]+a[n-i-1];
		}
		sort(b, b+mid);
		p(b[mid-1]-b[0]), nline;
	}
	return 0;
}