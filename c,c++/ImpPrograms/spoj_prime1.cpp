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
#define max 100000

int primes[100005];
vector<int> p;

void pre(){
	for(int i=2;i*i<=max;++i){
		if(primes[i]==0){
			int j = i*i;
			while(j<=max){
				primes[j] = 1;
				j+=i;
			}
		}	
	}

	for(int i=2;i<=max;++i){
		if(primes[i]==0)
			p.push_back(i);
	}
}

void solve(int a, int b){
	int *arr;
	arr = (int*)malloc((b-a+1)*sizeof(int));

	for(int i=0;i<b-a+1;++i){
		arr[i] = 0;
	}

	int s = p.size();
	for(int i=0;(p[i]*p[i])<=b;++i){
		int f = (a-1)/p[i];
		int j = (f+1)*p[i];
		if(j==p[i])
			j+=p[i];
		while(j<=b){
			arr[j-a] = 1;
			j+=p[i];
		}
	}

	for(int i=0;i<(b-a+1);++i){
		if(a+i==1)
			continue;
		if(arr[i]==0)
			printf("%d\n", a+i);
	}
	printf("\n");
}

int main() {
	int test;
	int a, b;
	s(test);
	pre();
	while(test--){
		s(a), s(b);
		solve(a, b);
	}
	return 0;
}
