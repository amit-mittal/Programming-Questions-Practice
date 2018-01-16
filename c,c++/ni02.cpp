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

bool compare(const int pa, const int pb){
	return pa<pb;
}

int main() {
	int test, n;
	s(test);
	while(test--){
		s(n);
		int a[2505][2];
		int b[2505][2505];
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j)
				b[i][j] = 0;
		}
		for(int i=0;i<n;++i){
			s(a[i][0]), s(a[i][1]);
		}
		sort(a[0], a[n], compare);
	}
	return 0;
}