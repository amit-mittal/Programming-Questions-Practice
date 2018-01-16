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
#define MAX 10000000000

vector<ll> v;
void pre(){
	ll f1 = 0LL;
	ll f2 = 1LL;
	v.push_back(f2);
	while(f2<=MAX){
		ll sum = f1+f2;
		v.push_back(sum);
		f1 = f2;
		f2 = sum;
	}
}

int main(){
	pre();
	int test;
	s(test);
	while(test--){
		ll n;
		sll(n);
		if(binary_search(v.begin(), v.end(), n))
			printf("IsFibo\n");
		else
			printf("IsNotFibo\n");
	}
}