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

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
#define mod 1000000007
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second

ll pro[1000001];

void sieve(){
	int a[1000001] = {0};
	for(int i=2;i*i<=1000000;++i){
		if(a[i]==0){
			for(int j=i*i;j<=1000000;j+=i){
				a[j] = 1;
			}
		}
	}
	
	for(int i=1;i<=1000000;++i)
		pro[i]=1;
	
	for(int i=2;i<=1000000;++i){
		if(a[i]==0){
			for(int j=i;j<=1000000;j+=i){
				pro[j]=pro[j]*i;
			}	
		}
	}
	
	pro[1]=1;
	for(int i=2;i<=1000000;++i){
		//printf("%d\n", pro[i]);
		pro[i] = (pro[i-1]*pro[i])%mod;
	}
}

ll exp(ll p, ll n){
	ll r = 1LL;
	while(n>0){
		if(n&1){
			--n;
			r = (r*p)%mod;
		}
		p = (p*p)%mod;
		n/=2;
	}
	return r;
}

ll inv(ll n){
	return exp(n, mod-2);
}

int main() {
	int test, x, y;
	s(test);
	
	sieve();
	
	while(test--){
		s(x), s(y);
		
		ll ans = (pro[y]*inv(pro[x-1]))%mod;
		
		printf("%lld\n", ans);
	}
	
	return 0;
}