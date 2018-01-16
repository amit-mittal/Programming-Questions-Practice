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
	int test, i;
	char a[250005], b[250005];
	s(test);
	while(test--){
		int start;
		ss(a), ss(b);
		int len1 = strlen(a);
		int len2 = strlen(b);

		if(len2>len1){
			start = 0;
			FOR(i, 0, len2){
				if(b[i] == a[start]){
					++start;

					if(start == len1)
						break;
				}
			}
		} else{
			start = 0;
			FOR(i, 0, len1){
				if(a[i] == b[start]){
					++start;

					if(start == len2)
						break;
				}
			}
		}

		if(start == len1 || start == len2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
