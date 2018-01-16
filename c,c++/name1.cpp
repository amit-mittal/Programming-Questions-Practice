//Author: KewlJerk
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

int main() {
	int test, n, a[200], b[200], i, len;
	char s1[40005], s2[40005], s3[40005];

	s(test);
	while(test--){
		FOR(i, 0, 200){
			a[i] = 0;
			b[i] = 0;
		}
		ss(s1), ss(s2);
		len = strlen(s1);
		FOR(i, 0, len)
			++b[s1[i]];
		len = strlen(s2);
		FOR(i, 0, len)
			++b[s2[i]];
		s(n);
		while(n--){
			ss(s3);
			len = strlen(s3);
			FOR(i, 0, len){
				++a[s3[i]];
			}
		}
		int ans = 1;
		FOR(i, 0, 200){
			if(a[i]>b[i]){
				ans = 0;
				break;
			}
		}
		if(ans == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
