#include <iostream>
#include <cstdio>
#include <vector>

#define s(n) scanf("%d",&n)

using namespace std;

vector < vector<int> > vec;
int visit[10005];

int dfs(int vertex, int prev){
	if(visit[vertex]==1)
		return 1;

	visit[vertex]=1;
	int ans = 0;
	for(int i=0;i<vec[vertex].size();++i){
		if(vec[vertex][i]!=prev){
			ans += dfs(vec[vertex][i], vertex);
		}
	}
	return ans;
}

int main(){
	int v,e,x,y;

	s(v),s(e);
	vec.resize(v+1);
	for(int i=0;i<=v;++i)
		visit[i]=0;

	for(int i=0;i<e;++i){
		s(x),s(y);
		vec[x].push_back(y);
		vec[y].push_back(x);
	}

	int result = dfs(1,0);
	int sum=0;
	for(int i=1;i<=v;++i){
		sum+=visit[i];
	}

//	printf("%d %d\n", result, sum);
	if(result>0 || sum<v)
		printf("NO\n");
	else
		printf("YES\n");

	return 0;
}