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
#define lim 1000

vector<int> v;

void pre(){
	int arr[1003]={0};
	for(int i=2;i*i<=1000;++i){
		if(arr[i]==0){
			int j=i*i;
			while(j<=lim){
				arr[j]=1;
				j+=i;
			}
		}
	}
	for(int i=2;i<=lim;++i){
		if(arr[i]==0)
			v.push_back(i);
	}
}

int main() {
	int test, n, m;
	pre();
	vector< vector<int> > p;
	int a[100005];
	
	p.resize(100002);
	for(int n=2;n<=100000;++n){
		int val = n;
		for(int i=0;(v[i]*v[i])<=n;++i){
			int count = 0;
			while(val%v[i]==0){
				val/=v[i];
				++count;
			}
			if(count>0)
				p[n].push_back(v[i]);
		}
		if(val>1)
			p[n].push_back(val);
	}

	s(test);
	while(test--){
		s(n), s(m);

		for(int i=0;i<=m;++i)
			a[i]=0;

		int s = p[n].size();
		for(int i=0;i<s;++i){
			int j = p[n][i];
			while(j<=m){
				a[j]=1;
				j+=p[n][i];
			}
		}

		int count = 0;
		for(int i=1;i<=m;++i){
			if(a[i]==0)
				++count;
		}

		printf("%d\n", count);
	}
	return 0;
}
