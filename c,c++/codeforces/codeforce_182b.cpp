//Author: Amit Mittal
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>

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
 
int main() {
	int n, m, x, y, a[100005];
	
	s(n), s(m);
	
	a[0] = 0;
	for(int i=1;i<=n;++i){
		s(x), s(y);
		a[i] = a[i-1] + (x*y);
	}

	int i = 1;
	while(m--){
		s(x);
		for(;i<=n;++i){
			if(a[i]>=x){
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}
