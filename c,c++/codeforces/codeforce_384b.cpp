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
int a[1001][101];

int main() {
	int n, m, k;
	
	s(n);s(m);s(k);
	
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			s(a[i][j]);
	
	if(k==0){
		printf("%d\n", ((m*(m-1))/2));
		for(int i=0;i<m;++i){
			for(int j=i+1;j<m;++j){
				printf("%d %d\n", i+1, j+1);
			}
		}
	} else {
		printf("%d\n", ((m*(m-1))/2));
		for(int i=m-1;i>=0;--i){
			for(int j=i-1;j>=0;--j){
				printf("%d %d\n", i+1, j+1);
			}
		}
	}
	
	return 0;
}
