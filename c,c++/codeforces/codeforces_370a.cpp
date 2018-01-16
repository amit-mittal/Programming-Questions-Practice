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
	int r1, c1, r2, c2;
	s(r1), s(c1), s(r2), s(c2);
	int r, b, k;
	if(r1==r2 || c1==c2){
		r = 1;
	} else {
		r = 2;
	}
	k = max(abs(r1-r2), abs(c1-c2));
	if((r1+c1)%2!=(r2+c2)%2){
		b = 0;
	} else {
		int v1 = abs(r1-r2);
		int v2 = abs(c1-c2);
		if(v1==v2)
			b = 1;
		else
			b = 2;
	}
	p(r), space, p(b), space, p(k), nline;
	return 0;
}
