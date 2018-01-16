#include <iostream>
#include <cstdio>

using namespace std;

void bfs(int **arr, int start, int *visit, int v){
	int queue[100], head, tail;
	queue[0] = start;
	head = 0; tail=0;

	visit[start]=1;
	while(head<=tail){
		int entry = queue[head];
		++head;
		printf("%d\n", entry);
		for(int i=0;i<=v;++i){
			if(arr[entry][i]==1 && visit[i]==0){
				++tail;
				queue[tail] = i;
				visit[i]=1;
			}
		}
	}
}

int main(){
	int v, e, x, y;
	int **arr;
	int *visit;

	printf("Vertices: ");
	scanf("%d",&v);
	printf("Edges: ");
	scanf("%d",&e);

	arr = new int*[v+1];
	for(int i=0;i<=v;++i)
		arr[i] = new int[v+1];
	visit = new int[v+1];

	for(int i=0;i<=v;++i)
		for(int j=0;j<=v;++j)
			arr[i][j] = 0;

	for(int i=0;i<e;++i){
		printf("Start End: ");
		scanf("%d",&x);
		scanf("%d",&y);

		printf("%d %d\n", x, y);
		arr[x][y]=1;
		arr[y][x]=1;
	}

	for(int i=0;i<=v;++i)
		visit[i] = 0;

	for(int i=0;i<=v;++i){
		for (int j=0;j<=v;++j){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("BFS:\n");
	bfs(arr, 0, visit, v);
	return 0;
}