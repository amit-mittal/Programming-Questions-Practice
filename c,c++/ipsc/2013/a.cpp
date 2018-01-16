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
	int test, e, c;
	s(test);
	while(test--){
		int a[13]={0};
		s(e), s(c);
		
		int v = e/100;
		a[12]+=v;
		e-=(v*100);
		
		v = e/50;
		a[11]+=v;
		e-=(v*50);

		v = e/20;
		a[10]+=v;
		e-=(v*20);

		v = e/10;
		a[9]+=v;
		e-=(v*10);

		v = e/5;
		a[8]+=v;
		e-=(v*5);

		v = e/2;
		a[7]+=v;
		e-=(v*2);

		v = e;
		a[6]+=v;
		
		v = c/50;
		a[5]+=v;
		c-=(v*50);

		v = c/20;
		a[4]+=v;
		c-=(v*20);

		v = c/10;
		a[3]+=v;
		c-=(v*10);

		v = c/5;
		a[2]+=v;
		c-=(v*5);

		v = c/2;
		a[1]+=v;
		c-=(v*2);

		v = c;
		a[0]+=v;

		for(int i=0;i<13;++i){
			p(a[i]), space;
		}
		nline;
	}
	return 0;
}