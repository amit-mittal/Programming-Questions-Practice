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
#define INF 10000000

ll a[501][501];
ll c[501][501];

ll gcd(ll a, ll b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

void relax(int i, int j, int k){
	if((ll)(a[i][k]+a[k][j])*c[i][j]<=(ll)(a[i][j])*(c[i][k]+c[k][j])){
		a[i][j] = a[i][k]+a[k][j];
		c[i][j] = c[i][k]+c[k][j];
	}
}

int main(){
	int n;
	s(n);
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			sll(a[i][j]);
			if(a[i][j]==0)
				c[i][j] = 0;
			else
				c[i][j] = 1;
		}
	}
			
	for(int k=0;k<n;++k){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				relax(i, j, k);
			}
		}
	}
	
	ll num = INF;
	ll den = 0;
	/*for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i==j)
				continue;
			if((a[i][j]+a[j][i])*den<num*(c[i][j]+c[j][i])){
				num = a[i][j]+a[j][i];
				den = c[i][j]+c[j][i];
			}
		}
	}*/
	for(int i=0;i<n;++i){
		if(a[i][i]*den<num*c[i][i]){
			num = a[i][i];
			den = c[i][i];
		}
	}
	/*for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}*/
	
	ll hcf = gcd(num, den);
	num/=hcf;
	den/=hcf;
	printf("%lld/%lld\n", num, den);
	
	return 0;
}