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

vector<int> v;

void pre(){
	int a[1006]={0};
	for(int i=2;i*i<=1000;++i){
		if(a[i]==0){
			int j= i*i;
			while(j<=1000){
				a[j]=1;
				j+=i;
			}
		}
	}
	for(int i=2;i<=1000;++i){
		if(a[i]==0)
			v.push_back(i);
	}
}

int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

void factorize(int n){
	ll ans = 1LL;
	for(int i=0;(v[i]*v[i])<=n;++i){
		int count = 0;
		while(n%v[i]==0){
			n = n/v[i];
			++count;
		}
		ans = (ll)(ans*(count+1));
	}
	if(n>1)
		ans = (ll)ans*2LL;
	printf("%lld\n", ans);
}

int main() {
	int test, a, b;
	pre();
	s(test);
	while(test--){
		s(a), s(b);
		int hcf = gcd(a, b);
		
		factorize(hcf);
	}
	return 0;
}
