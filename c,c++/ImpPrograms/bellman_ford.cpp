#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

#define INF -1000
#define MAX 1000

using namespace std;

int v;

void dfs(int vertex, int **adj, int visit[]){
	printf("%d->",vertex);
	visit[vertex] = 1;
	for(int i=0;i<v;++i){
		if(adj[vertex][i]==1 && visit[i]==0){
			dfs(i, adj, visit);
		}
	}
}

void initialize(int s, int *dist, int *parent){
	for(int i=0;i<v;++i){
		dist[i] = MAX;
		parent[i] = -1;
	}
	dist[s] = 0;
}

void relax(int s, int e, int w, int *dist, int *parent){
	if(dist[e] > dist[s] + w){
		dist[e] = dist[s] + w;
		parent[e] = s;
	}
}

bool bellman_ford(int **adj, int **weight, int source){
	int *dist, *parent;
	dist = new int[v+1];
	parent = new int[v+1];
	
	initialize(source, dist, parent);
	
	for(int k=1;k<=v-1;++k){
		for(int i=0;i<v;++i){
			for(int j=0;j<v;++j){
				if(adj[i][j]==1){
					relax(i, j, weight[i][j], dist, parent);
				}
			}
		}
	}
	
	printf("Starting source %d:\n", source);
	
	printf("Printing the distances:\n");
	for(int i=0;i<v;++i){
		printf("%d ", dist[i]);
	}
	
	printf("\nPrinting the parents:\n");
	for(int i=0;i<v;++i){
		printf("%d ", parent[i]);
	}
	printf("\n\n");
	
	for(int i=0;i<v;++i){
		for(int j=0;j<v;++j){
			if(dist[j] > dist[i] + weight[i][j]){
				return false;//cycle exists
			}
		}
	}
	
	return true;
}

int main(){
	srand(time(NULL));
	int x, y, sum;
	int *visit;
	int **adj, **weight;
	
	printf("Enter the number of vertices: ");
	scanf("%d",&v);
	
	visit = new int[v+1];
	adj = new int*[v+1];
	for(int i=0;i<=v;++i){
		adj[i] = new int[v+1];
	}
	
	weight = new int*[v+1];
	for(int i=0;i<=v;++i){
		weight[i] = new int[v+1];
	}
	
	while(1){
		int count = 0;
		for(int i=0;i<v;++i){
			for(int j=0;j<v;++j){
				adj[i][j] = rand()%2;
			}
		}
		
		for(int i=0;i<v;++i){
			for(int k=0;k<v;++k){
				visit[k]=0;
			}
		
			dfs(i, adj, visit);
			sum = 0;
			for(int j=0;j<v;++j){
				sum+=visit[j];
			}
			
			if(sum==v){
				++count;
			}
		}
		
		if(count==v){
			printf("\nPrinting the randomly genrated connected graph:\n");
			for(int i=0;i<v;++i){
				for(int j=0;j<v;++j){
					printf("%d ",adj[i][j]);
				}
				printf("\n");
			}

			for(int i=0;i<v;++i){
				for(int k=0;k<v;++k){
					visit[k]=0;
				}
		
				dfs(i, adj, visit);
				printf("\n");
			}

			
			printf("\nPrinting the randomly genrated connected graph with weights:\n");
			for(int i=0;i<v;++i){
				for(int j=0;j<v;++j){
					if(adj[i][j]==1)
						weight[i][j] = rand()%100 - 50;
					else
						weight[i][j] = INF;
				}
			}
			
			for(int i=0;i<v;++i){
				for(int j=0;j<v;++j){
					printf("%d\t", weight[i][j]);
				}
				printf("\n");
			}
			printf("\n");

			for(int i=0;i<v;++i){
				bellman_ford(adj, weight, i);
			}
			break;
		}
	}
	
	return 0;
}
