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
	int n, k, l, r, sall, sk;
	
	s(n), s(k), s(l), s(r), s(sall), s(sk);
	
	int org = sk;
	
	int i = k;
	while(i*l<sk){
		--i;
		sk-=r;
	}
	sk+=r;
	++i;
	
	int val = (i-1)*l;
	int rem = sk - val;
	
	for(int j=0;j<i-1;++j){
		p(l), space;
	}
	p(rem), space;
	for(int j=0;j<k-i;++j){
		p(r), space;
	}
	
	
	i = n-k;
	sk = sall-org;
	while(i*l<sk){
		--i;
		sk-=r;
	}
	sk+=r;
	++i;
	
	val = (i-1)*l;
	rem = sk - val;
	
	for(int j=0;j<i-1;++j){
		p(l), space;
	}
	p(rem), space;
	for(int j=0;j<n-k-i;++j){
		p(r), space;
	}
	
	return 0;
}
