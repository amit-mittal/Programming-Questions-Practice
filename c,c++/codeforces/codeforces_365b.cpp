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
	int n;
	ll a[100005];
	s(n);
	for(int i=0;i<n;++i)
		sll(a[i]);

	if(n==1){
		p(1), nline;
		return 0;
	}

	int max_len = 2;
	int curr_len = 2;
	ll f = a[0];
	ll s = a[1];
	for(int i=2;i<n;++i){
		if(a[i]==(f+s)){
			++curr_len;
		} else {
			if(curr_len>max_len){
				max_len = curr_len;
			}
			curr_len = 2;
		}
		f = s;
		s = a[i];
	}
	if(curr_len>max_len){
		max_len = curr_len;
	}

	p(max_len), nline;

	return 0;
}
