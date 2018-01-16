#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

int main(){
	int n, k, a[300005];
	s(n), s(k);
	for(int i=0;i<n;++i){
		s(a[i]);
	}
	if(n==1){
		printf("%d\n", a[0]);
		return 0;
	}
	
	for
	return 0;
}