//Author: kewljerk
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
#define FOR(i,a,b) for(i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define lls(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define llp(a) printf("%lld",a)
#define sp(a) printf("%s",a)
#define cp(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

int gcd(int a, int b){
	if(a<b)
		return gcd(b,a);

	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

int main() {
	int test,i,n,ans;
	s(test);
	while(test--){
		int f1 = 0, f2 = 0;
		int a[1005];
		s(n);
		s(ans);
		FOR(i,1,n){
			s(a[i]);
			ans = gcd(ans, a[i]);
		}
		p(ans);
		nline;
	}
	return 0;
}