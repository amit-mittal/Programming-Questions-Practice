#include <iostream>
#include <cstdio>

#define MAX 10000

using namespace std;

int extractMin(int *visit, int *dist, int v){
	int minIndex;

	for(int i=0;i<=v;++i){
		if(visit[i]==0){
			minIndex = i;
			break;
		}
	}

	if(minIndex==v+1)
		return -1;

	for(int i=0;i<=v;++i){
		if(dist[i]<dist[minIndex] && visit[i]==0){
			minIndex = i;
		}
	}
	return minIndex;
}

void print(int *arr, int v){
	for(int i=0;i<=v;++i)
		printf("%d ", arr[i]);
	printf("\n");
}

void dijkstra(int **a, int s, int *visit, int *dist, int v){
	dist[s] = 0;

	while(1){
		int vertex = extractMin(visit, dist, v);
		print(dist, v);
		printf("Min Vertex: %d\n", vertex);
		
		if(vertex==-1)
			return;

		visit[vertex] = 1;
		for(int i=0;i<=v;++i){
			if(a[vertex][i]>0){
				if(dist[vertex]+a[vertex][i]<dist[i]){
					dist[i] = dist[vertex]+a[vertex][i];
				}
			}
		}
	}
}

int main(){
	int v, e, x, y, w;
	int **arr;
	int *visit, *dist;

	printf("Vertices: ");
	scanf("%d",&v);
	printf("Edges: ");
	scanf("%d",&e);

	arr = new int*[v+1];
	for(int i=0;i<=v;++i)
		arr[i] = new int[v+1];
	visit = new int[v+1];
	dist = new int[v+1];

	for(int i=0;i<=v;++i)
		for(int j=0;j<=v;++j)
			arr[i][j] = 0;

	for(int i=0;i<e;++i){
		printf("Start End Weight: ");
		scanf("%d",&x);
		scanf("%d",&y);
		scanf("%d",&w);

		arr[x][y]=w;
		arr[y][x]=w;
	}

	for(int i=0;i<=v;++i){
		for (int j=0;j<=v;++j){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for(int j=0;j<=v;++j){
		for(int i=0;i<=v;++i){
			visit[i] = 0;
			dist[i] = MAX;
		}
		printf("Dijkstra on vertex %d:\n", j);
		dijkstra(arr, j, visit, dist, v);
	}

	return 0;
}