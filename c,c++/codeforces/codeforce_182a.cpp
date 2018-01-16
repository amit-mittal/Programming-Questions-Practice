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
	int n, q, c1=0, c2=0, l, r;
	s(n), s(q);

	int x;
	for(int i=0;i<n;++i){
		s(x);
		if(x==-1)
			++c1;
		else
			++c2;
	}

	int ans;
	while(q--){
		s(l), s(r);
		if((r-l+1)%2==1)
			ans = 0;
		else{
			int val = (r-l+1)/2;
			if(c1>=val && c2>=val)
				ans = 1;
			else
				ans = 0;
		}
		printf("%d\n", ans);
	}
	return 0;
}
