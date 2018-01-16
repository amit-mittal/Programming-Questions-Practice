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
    
		ll int a[10004];
		ll int b[10004];
	int test, n;
	s(test);
	while(test--){
		s(n);
		ll int  sum = 0LL;
		for(int i=0;i<n;++i){
			sll(b[i]);
		}

		sort(b, b+n);
		
		for(int i=0;i<n;++i){
			sum+=b[i];
			a[i] = sum;
		}

		int i= n-1;
		for(;i>0;--i){
			if(a[i-1]>b[i]){
				break;
			}
		}

		if(i<=0)
			printf("-1\n");
		else
			printf("%d\n", i+1);
	}
	return 0;
}