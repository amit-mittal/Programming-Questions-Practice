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
	int count = 0;
	int n, m, k, dish;
	s(n), s(m), s(k);
	for(int i=0;i<n;++i){
		s(dish);
		if(dish==1){
			if(m==0)
				count+=1;
			else
				m-=1;
		} else {
			if(k>0)
				k-=1;
			else if(m>0)
				m-=1;
			else
				count+=1;
		}
	}
	p(count), nline;
	return 0;
}
