#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
#define s(n) scanf("%d", &n)

vector< vector<int> > v;
bool ans;

void dfs(int s, int visit[], int level){
	visit[s] = level;
	for(int i=0;i<v[s].size();++i){
		int ver = v[s][i];
		if(visit[ver]==0)
			dfs(ver, visit, level+1);
		else{
			if((level + 1 - visit[ver])%2 == 1){
				ans = false;
				//cout<<s<<" "<<ver<<endl;
			}
		}
	}
}

int main(){
	int test, n, x, y, c;
	s(test);
	for(int t=1;t<=test;++t){
		v.clear();
		ans = true;
		int visit[2005] = {0};
		s(n), s(c);
		v.resize(n+1);

		for(int i=0;i<c;++i){
			s(x), s(y);
			v[x].push_back(y);
			v[y].push_back(x);
		}

		for(int i=1;i<=n;++i){
			if(visit[i]==0)
				dfs(i, visit, 1);
		}

		if(ans)
			printf("Scenario #%d:\nNo suspicious bugs found!\n", t);
		else
			printf("Scenario #%d:\nSuspicious bugs found!\n", t);
	}
	return 0;
}
