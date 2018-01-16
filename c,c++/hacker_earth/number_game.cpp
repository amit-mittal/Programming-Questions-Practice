#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>
#include<map>
#include<queue>
#define X first
#define Y second
#define pb push_back
#define fr(i,n) for(int i=1;i<=n;i++)
#define MOD 1000000007

using namespace std;

typedef long long ll;

int T;
ll mod;
int b[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
ll a[]={1996011519951206ll,1995120619960115ll,1995100319960115ll,195100319951206ll,1996011519951003ll};


ll exp(ll q){
	ll r = 1;
	ll p = 2;
	while(q>0){
		if(q%2==1){
			q--;
			r = r*p;
			if(r>=MOD)
				r = r%MOD;
		}
		p = p*p;
		q/=2;
		if(p>=MOD)
			p = p%MOD;
	}
	return r;
}

int main()
{
	scanf("%d",&T);
	for(;T;T--)
	{
		ll init_1=0, init_2=0;
		ll a, b;
		cin>>a>>b;
		
		if(a==b && a!=1){
			printf("1\n");
			continue;
		}
		if(a==b && a==1){
			printf("0\n");
			continue;
		}
		if(b-a==1 && a!=1){
			printf("2\n");
			continue;
		}
		if(b-a==1 && a==1){
			printf("1\n");
			continue;
		}
		ll total = 3*exp(b-a-1);
		if(total>=MOD)
			total = total%MOD;

		printf("%lld\n", total);
	}
	return 0;
}