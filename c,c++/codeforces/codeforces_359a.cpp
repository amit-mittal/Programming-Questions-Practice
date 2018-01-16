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
	int m, n;
	int a[52][52];
	s(m), s(n);
	int count = 0;
	bool ans_2 = false;
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			s(a[i][j]);
			if(a[i][j]==0)
				continue;
			if(i==0 || i==(m-1))
				ans_2 = true;
			if(j==0 || j==(n-1))
				ans_2 = true;
		}
	}
	
	if(ans_2)
		printf("2\n");
	else
		printf("4\n");

	return 0;
}
