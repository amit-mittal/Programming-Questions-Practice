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
	int test, val;
	s(test);

	int a[1005];
	for(int i=0;i<=1000;++i)
		a[i] = 100000000;

	a[0] = 0;
	for(int i=1;i<=1000;++i){
		for(int j=1;(j*j)<=i;++j){
			a[i] = min(a[i], a[i-(j*j)] + 1);
		}
	}
	
	while(test--){
		s(val);
		p(a[val]), nline;
	}
	return 0;
}
