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

int v[3][5] = {0};

void func(int val){
	int rem = val%5;
	int q = val/5;
	
	v[1][rem]+=q;
	v[2][rem]++;
}

void shift(){
	int temp1 = v[1][4];
	int temp2 = v[2][4];

	for(int i=4;i>0;--i){
		v[1][i] = v[1][i-1];
		v[2][i] = v[2][i-1];
	}
	v[1][0] = temp1 + temp2;
	v[2][0] = temp2;
}

int calc(){
	int min = 2000000000;
	for(int j=0;j<4;++j){
		int sum = 0;
		for(int i=0;i<5;++i){
			sum+=(v[1][i])+(v[2][i]*v[0][i]);
		}
		if(sum<min)
			min = sum;
		shift();
	}
	return min;
}

int main() {
	int test, n, a[10005];
	
	v[0][0] = 0;
	v[0][1] = 1;
	v[0][2] = 1;
	v[0][3] = 2;
	v[0][4] = 2;

	s(test);
	while(test--){
		for(int i=1;i<3;++i){
			for(int j=0;j<5;++j)
				v[i][j] = 0;
		}
		s(n);
		for(int i=0;i<n;++i){
			s(a[i]);
		}
		sort(a, a+n);
		int sum = 0;
		int k = a[n-1] - a[0];
		for(int i=0;i<n;++i){
			int val = a[i] - a[0];
			func(val);
		}
		sum = calc();
		printf("%d\n", sum);
	}
	return 0;
}