//Author: kewljerk
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
#define FOR(i,a,b) for(i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define lls(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define llp(a) printf("%lld",a)
#define sp(a) printf("%s",a)
#define cp(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

int a[65], n, ans;

int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

ll int exp(ll int p, unsigned ll int q){
	ll int r = 1;

	while (q != 0) {
		if (q % 2 == 1) {    // q is odd
			r *= p;
			q--;
		}
		p *= p;
		q /= 2;
	}

	return r;
}

ll int func(int index, int curr){
	if(index>n)
		return 0;

	if(curr==ans){
		return exp(2, n-index);
	}

	if(curr==-1){
		ll int ans=0;

		ans+=func(index+1, curr);//not included
		ans+=func(index+1, a[index]);//included

		return ans;
	}

	ll int ans=0;
	int new_curr = gcd(curr, a[index]);

	ans+=func(index+1, curr);//not included
	ans+=func(index+1, new_curr);//included

	return ans;
}

int main() {
	int test,i;
	s(test);
	while(test--){
		s(n);

		s(a[0]);
		ans = a[0];
		FOR(i,1,n){
			s(a[i]);
			ans = gcd(a[i], ans);
		}
		
		ll int final_ans = func(0, -1);

		llp(final_ans);
		nline;
	}
	return 0;
}