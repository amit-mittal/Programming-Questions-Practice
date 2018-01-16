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

int a[100005][2];

int main() {
	int n, s, f;
	s(n);
	for(int i=0;i<n;++i){
		s(f), s(s);
		a[f][0]++;
		if(s!=f)
			a[s][1]++;
	}
	int moves = n/2;
	int m = 1000000;
	for(int i=0;i<=100000;++i){
		if(2*(a[i][0]+a[i][1])<n)
			continue;
		int val = max((moves - a[i][0]), 0);
		m = min(val, m);
	}
	if(m==1000000)
		printf("Impossible\n");
	else
		printf("%d\n", m);
	return 0;
}
