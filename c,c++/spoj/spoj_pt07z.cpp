#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

#define s(n) scanf("%d",&n)

using namespace std;

vector < vector<int> > v;
vector<int> a;
vector < pair<int,int> > q;
int visit[10005];	
int m = 0;

void bfs(int vertex){
	int distance = 0;
	pair<int,int> p1 (vertex, distance);
	q.push_back(p1);
	int index = 0;

	while(1){
		++index;
		visit[vertex]=1;
		++distance;
		for(int i=0 ; i<v[vertex].size() ; ++i){
			if(visit[v[vertex][i]]==0){
				pair<int,int> p2 (v[vertex][i], distance);
				q.push_back(p2);
			}

			if(v[v[vertex][i]].size()==1)
				a.push_back(distance);
		}

		if(index<q.size()){
			vertex=q[index].first;
			distance=q[index].second;
		}
		else
			break;
	}
}

int main(){
	int n, x, y;
	s(n);

	v.resize(n+1);
	for(int i=0;i<n-1;++i){
		s(x),s(y);
		v[x].push_back(y);
		v[y].push_back(x);
	}

	q.clear();
	for(int j=0;j<=n;++j)
		visit[j]=0;
	bfs(1);

	sort(a.begin(), a.end());

	printf("%d\n", m);

	return 0;
}