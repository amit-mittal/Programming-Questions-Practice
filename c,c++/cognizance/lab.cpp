#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

#define s(n) scanf("%d",&n)

using namespace std;

vector < vector<pair<int,int> > > vec;
int visit[10005], end, rem, weight;

int dfs(int vertex, int prev){
	if(vertex==end)
		return 0;

	if(vertex==rem)
		return 1;

	if(visit[vertex]==1)
		return 0;

	visit[vertex]=1;
	int ans = 0;
	for(int i=0;i<vec[vertex].size();++i){
		if(vec[vertex][i]!=prev && visit[vertex]==0){
			ans += dfs(vec[vertex][i], vertex);
		}
	}
	return ans;
}

int main(){
int n, q, x, y, len, z;

	s(n), s(q);

	vec.resize(n+1);
	for(int i=0;i<n-1;++i){
		s(x), s(y), s(len);
		
		pair <int, int> p1(x, len);
		vec[y].push_back(p1);
		pair <int, int> p2(y, len);
		vec[x].push_back(p2);
	}

	while(q--){
		weight = 0;
		for(int i=0;i<=n;++i)
			visit[i]=0;
		s(x),s(end),s(rem);
		int res = dfs(x, -1);

		if(res>0){
			printf("YES\n%d\n", );
		else
			printf("NO\n");
		}
	}

return 0;
}