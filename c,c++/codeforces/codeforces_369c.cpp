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

vector<int> v[100005];
vector<int> prob;

void dfs(int ver, int last){
	if(ver==1)
		return 1;
	if(v[ver].size()==1)
		return 0;
		
	for(int i=0;i<v[ver].size();++i){
		int val = dfs(v[ver][i], ver);
		if(val==1)
			//push ver vertex
	}
}

int main() {
	int n, start, end, p;
	
	s(n);
	for(int i=0;i<n;++i){
		s(start), s(end), s(p);
		v[start].push_back(end);
		v[end].push_back(start);
		if(p==2){
			prob.push_back(start);
			prob.push_back(end);
		}
	}
	
	for(int i=0;i<prob.size();++i){
		dfs(prob[i], -1);
	}
	return 0;
}
