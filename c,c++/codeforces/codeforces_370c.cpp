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
	int n, m, val;
	s(n), s(m);
	int col[105]={0};
	for(int i=0;i<n;++i){
		s(val);
		++col[val];
	}
	vector< pair<int, int> > v;
	int count = 0;
	for(int i=1;i<=m;++i){
		if(col[i]==0)
			continue;
		for(int j=i+1;j<=m;++j){
			while(col[j]>0 && col[i]>0){
				count+=2;
				v.push_back(make_pair(i, j));
				v.push_back(make_pair(j, i));
				--col[i], --col[j];
			}
		}
	}
	p(count), nline;
	for(int i=0;i<v.size();++i){
		p(v[i].first), space, p(v[i].second), nline;
	}
	for(int i=1;i<=m;++i){
		while(col[i]>0){
			p(col[i]), space, p(col[i]), nline;
			--col[i];
		}
	}
	return 0;
}
