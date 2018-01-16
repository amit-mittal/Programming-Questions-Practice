#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

#define s(n) scanf("%d",&n)

int ver;
vector< vector<int> > v;

void makeGraph(){
	int e, x, y;
	printf("Vertices: ");
	s(ver);
	printf("Edges: ");
	s(e);

	v.resize(ver+1);

	for(int i=0;i<e;++i){
		printf("Start End: ");
		s(x),s(y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
}

void printGraph(){
	for(int j=1;j<v.size();++j){
		printf("List %d: ", j);
		for(int i=0;i<v[j].size();++i){
			printf("%d ", v[j][i]);
		}
		printf("\n");
	}
}

void dfs(int vertex, int *visit){
	printf("%d ", vertex);
	visit[vertex] = 1;
	for(int i=0;i<v[vertex].size();++i){
		int a = v[vertex][i];
		if(visit[a]==0)
			dfs(a, visit);
	}
}

int main(){
	makeGraph();
	printGraph();

	int *visit;
	visit = new int[ver+1];

	dfs(1, visit);

	return 0;
}