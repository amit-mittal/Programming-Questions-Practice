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
	int n;
	int a[1005];
	s(n);
	for(int i=0;i<n;++i)
		s(a[i]);
	int sum1 = 0, sum2 = 0;
	int p1 = 0, p2 = n-1;
	bool g = true;
	for(int i=0;i<n;++i){
		if(g){
			if(a[p1]>a[p2]){
				sum1 += a[p1];
				++p1;
			} else {
				sum1+=a[p2];
				--p2;
			}
			g = false;
		} else {
			if(a[p1]>a[p2]){
				sum2 += a[p1];
				++p1;
			} else {
				sum2+=a[p2];
				--p2;
			}
			g = true;
		}
	}
	printf("%d %d\n", sum1, sum2);
	return 0;
}
