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
#define LIM 10000

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

int n;
int a[205][205];
int b[205][205];
int p[205][205];

void floydWarshall(){
	for(int k=0;k<n;++k){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(k == i || k == j)
					continue;
				if(b[i][k] + a[k][j] <= b[i][j]){
					b[i][j] = b[i][k] + a[k][j];
					p[i][j] = k;
				}
			}
		}
	}
}

void func(){
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			p[i][j] = -1;
	floydWarshall();
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(b[i][j] == a[i][j] && p[i][j] == -1)
				printf("%d %d\n", i+1, j+1);
		}
	}
}

int main() {
	int test;
	s(test);
	while(test--){
		s(n);
		for(int i=0;i<n;++i){
			for(int j = 0;j<n;++j){
				s(a[i][j]);
				b[i][j] = a[i][j];
			}
		}
		func();
	}
	return 0;
}
