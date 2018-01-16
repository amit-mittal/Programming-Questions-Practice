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
	int test;
	char str[10005];
	s(test);
	while(test--){
		int ans = 0;
		ss(str);
		int len = strlen(str);
		if(len%2==0){
			int a[26]={0};int b[26]={0};
			for(int i=0;i<(len/2);++i){
				++a[str[i]-'a'];
			}
			for(int i=(len/2);i<len;++i){
				++b[str[i]-'a'];
			}
			for(int i=0;i<26;++i){
				if(a[i]<b[i]){
					ans+=(b[i]-a[i]);
				}
			}
		}else{
			ans = -1;
		}
		p(ans), nline;
	}
	return 0;
}