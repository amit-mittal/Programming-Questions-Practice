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
	int n, a[251][251], m;
	int start, gas, end;
	s(n);
	FOR(i,0,n){
		FOR(j,0,n){
			s(a[i][j]);
		}
	}

	FOR(k,0,n){
		FOR(i,0,n){
			FOR(j,0,n){
				if(a[i][k]+a[k][j]<a[i][j])
					a[i][j] = a[i][k]+a[k][j];
			}
		}
	}

	s(m);
	while(m--){
		s(start), s(gas), s(end);
		printf("%d %d\n", a[start][gas] + a[gas][end], a[start][gas] + a[gas][end] - a[start][end]);
	}
	return 0;
}