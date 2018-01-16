#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector< vector<int> > v;
int n;
int max_counter = 0;

void bfs(int level, vector<int> layer, int *visit){
	int start = 0;
	vector<int> next;
	
	while(start<layer.size()){
		int ver = layer[start];
		visit[ver] = 1;
		for(int i=0;i<v[ver].size();++i){
			if(visit[v[ver][i]] == 0){
				next.push_back(v[ver][i]);
				visit[v[ver][i]] = 1;
			}
		}
		++start;
	}

	if(next.size()>0)
		bfs(level+1, next, visit);
	
	if(level>max_counter)
		max_counter = level;
}

int main(){
	int p;

	scanf("%d",&n);
	
	v.resize(n+1);
	for(int i=1;i<=n;++i){
		scanf("%d",&p);
		if(p!=-1){
			v[p].push_back(i);
		}
	}
	
	for(int i=1;i<=n;++i){
		int *visit;
		visit = new int[n+2];
		vector<int> layer;
		layer.push_back(i);
		bfs(1, layer, visit);
		layer.pop_back();
	}

	cout<<max_counter<<endl;

	return 0;
}