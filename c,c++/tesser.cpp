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
	int test, n, a[100005];
	s(test);
	while(test--){
		char sub[100005], str[100005];
		s(n);

		s(a[0]);
		for(int i=1;i<n;++i){
			s(a[i]);
			if(a[i]>a[i-1]){
				str[i-1]='G';
			} else if(a[i]<a[i-1]){
				str[i-1]='L';
			} else {
				str[i-1]='E';
			}
		}
		str[n-1]='\0';
		ss(sub);

		if(strstr(str, sub)!=NULL){
			ps("YES\n");
		} else {
			ps("NO\n");
		}
	}
	return 0;
}
