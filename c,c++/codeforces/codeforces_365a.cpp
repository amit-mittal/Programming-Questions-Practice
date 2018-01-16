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
	int n, k, ans=0, val;
	s(n), s(k);

	for(int i=0;i<n;++i){
		int a[10] = {0};
		bool valid = true;

		s(val);
		while(val>0){
			int r = val%10;
			val/=10;
			a[r]++;
		}

		for(int i=0;i<=k;++i){
			if(a[i]==0)
			{
				valid = false;
			}
		}
		if(valid)
			++ans;
	}
	p(ans), nline;
	return 0;
}
