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
	vector<int> v[100];
	s(n);
	for(int i=0;i<n;++i){
		s(m);
		for(int j=0;j<m;++j){
			s(val);
			v[i].push_back(val);
		}
		sort(v[i].begin(), v[i].end());
	}
	
	bool subsets[105] = {0};
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i==j)
				continue;
			
			int i1 = 0;int j1 = v[i].size();
			int i2 = 0;int j2 = v[j].size();
			
			if(j1>j2)
				continue;
			
			while(1){
				if(v[i][i1]==v[j][i2]){
					++i1;++i2;
				} else if(v[i][i1]>v[j][i2]){
					++i2;
				} else	{
					break;
				}
				if(i1==j1){
					subsets[j] = true;
					//p(i), space, p(j), nline;
					break;
				}
			}
		}
	}
	for(int i=0;i<n;++i){
		if(subsets[i])
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
