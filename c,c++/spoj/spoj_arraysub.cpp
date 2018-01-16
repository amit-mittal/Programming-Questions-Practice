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

int a[1000006];
priority_queue<int> q;

int main() {
	int n, k;
	s(n);
	for(int i=0;i<n;++i)
		s(a[i]);
	s(k);

	for(int i=0;i<(k-1);++i){
		q.push(a[i]);
	}

	for(int i=k;i<n;++i){
		q.push(a[i]);
		printf("%d ", q.top());
	}

	return 0;
}
