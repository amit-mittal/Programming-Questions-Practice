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

int main() {
	int n;
	int a[100005];
	s(n);
	for(int i=0;i<n;++i)
		s(a[i]);
	sort(a, a+n);
	int mid = a[n-1];
	vector<int> left, right;
	int l = mid, r = mid;
	for(int i=n-2;i>=0;--i){
		if(a[i]<r){
			right.push_back(a[i]);
			r = a[i];
		} else if(a[i]<l){
			left.push_back(a[i]);
			l = a[i];
		}
	}
	printf("%d\n", left.size() + 1 + right.size());
	for(int i=left.size()-1;i>=0;--i)
		printf("%d ", left[i]);
	printf("%d ", mid);
	for(int i=0;i<right.size();++i)
		printf("%d ", right[i]);
	return 0;
}
