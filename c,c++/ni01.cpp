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
	int test, n, m, q, p, r, k;
	int w, x, y, z;
	s(test);
	while(test--){
		s(n), s(m), s(q), s(p), s(r), s(k);
		int span = min(p, r);
		w = n;
		x = 0;
		y = m;
		z = q;
		int car_rem = 0;
		int more_rem = 0;
		for(int i=span;i<=k;i+=span){
			car_rem+=span;
			more_rem+=span;
			
			if(more_rem>=r){
				if((more_rem/r)<=y){
					z+=(more_rem/r);
					y-=(more_rem/r);
				} else{
					z+=y;
					y = 0;
				}
				more_rem = more_rem%r;
			}

			if(car_rem>=p){
				x+=
			}else{
				
			}
		}
		if(i-span<k){

		}
		p(w), space, p(x), space, p(y), space, p(z), nline;
	}
	return 0;
}