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
	int sum, n, a[55];
	int count = 0;
	while(1){
		++count;
		sum = 0;
		s(n);
		if(n==0)
			break;

		for(int i=0;i<n;++i){
			s(a[i]);
			sum+=a[i];
		}

		int val = sum/n;
		
		int ans = 0;
		for(int i=0;i<n;++i){
			if(a[i]>val)
				ans+=(a[i]-val);
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", count, ans);
	}
	return 0;
}