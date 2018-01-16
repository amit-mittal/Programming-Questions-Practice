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
int a[100005];

int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main() {
	s(n);
	for(int i=0;i<n;++i)
		s(a[i]);
	int ans = a[1] - a[0];
	for(int i=2;i<n;++i){
		ans = gcd(ans, a[i] - a[i-1]);
	}
	cout << ans << endl;
	int f = 0;
	for(int i=1;i<n;++i){
		int diff = a[i] - a[i-1];
		f+=(diff/ans);
		--f;
	}
	printf("%d\n", f);
	return 0;
}
