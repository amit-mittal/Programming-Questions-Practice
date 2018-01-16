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

double **a;
char s[4005];

bool search(){
}

int main(){
	int req_sum;
	int len = strlen(s);
	
	a = new double*[s];
	for(int i=0;i<s;++i)
		a[i] = double ll[s+1];

	for(int i=0;i<s;++i){
		int sum = 0;
		for(int j=0;j<s;++j){
			a[i][j] = (double)((s[i]-'0')*j + (double)sum/10);
			sum+=(s[j]-'0');
		}
		a[i][s] = (double)((s[i]-'0')*s + (double)sum/10);
	}

	for(int i=0;i<=s;++i){
		int sum = 0;
		for(int j=i;j<=s;++j){
			sum+=a[]
		}
	}
	return 0;
}
