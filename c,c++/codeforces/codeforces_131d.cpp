#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector < vector <int> > v;
vector < int > cycle;
bool found_cycle = false;

void find_cycle(int ver, int *visit){
	visit[ver] = 1;
	cycle.push_back(ver);
	
	for(int i=0;i<v[ver].size();++i){
		if(found_cycle)
			return;
		
		if(cycle.size()>=2 && v[ver][i] == cycle[cycle.size()-2])
			continue;

		if(visit[v[ver][i]] == 0){
			find_cycle(v[ver][i], visit);
		} else {
			found_cycle = true;
			return;
		}
	}

	if(found_cycle)
		return;
	visit[ver] = 0;
	cycle.pop_back();
}

bool in_cycle(int ver){
	for(int i=0;i<cycle.size();++i){
		if(cycle[i] == ver){
			return true;
		}
	}
	return false;
}

int return_distance(int ver, int* vis){
	if(in_cycle(ver))
		return 0;

	int dist = 0;
	for(int i=0;i<v[ver].size();++i){
		if(vis[v[ver][i]] == 0){
			dist = 1+return_distance(v[ver][i], vis);
			if(dist>0)
				return dist;
		}
	}

	return -100000;
}

int main(){
	int n, x, y;

	scanf("%d",&n);
	
	v.resize(n+1);
	for(int i=0;i<n;++i){
		scanf("%d %d",&x,&y);		
		v[x].push_back(y);
		v[y].push_back(x);
	}

	int *visit;
	visit = new int[n+1];

	find_cycle(1, visit);

	for(int i=1;i<=n;++i){
		int *vis;
		vis = new int[n+1];
		printf("%d ",return_distance(i, vis));
	}
	printf("\n");

	return 0;
}