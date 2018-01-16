#include <iostream>
#include <cstdio>

#define MAX 10000

using namespace std;

void print(int *arr, int v){
	for(int i=0;i<=v;++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int kruskal(int **arr, int v, int *rep, int **ans){
	int min_x, min_y;
	int count = 0;
	while(1){
		//will return min edge
		min_x = min_y = 0;
		for(int i=0;i<=v;++i){
			for(int j=0;j<=v;++j){
				if(arr[i][j]<arr[min_x][min_y]){
					min_x = i;
					min_y = j;
				}
			}
		}

		//checking if min edge is right
		if(rep[min_x]==rep[min_y]){
			if(rep[min_x]==-1){
				ans[count][0] = min_x;
				ans[count][1] = min_y;
				ans[count][2] = arr[min_x][min_y];
				++count;

				arr[min_x][min_y] = MAX;
				arr[min_y][min_x] = MAX;
				
				rep[min_x] = min_x;
				rep[min_y] = min_x;
			}
			else{
				printf("Cycle found %d %d\n", min_x, min_y);
				arr[min_x][min_y] = MAX;
				arr[min_y][min_x] = MAX;
			}
		} else{
			ans[count][0] = min_x;
			ans[count][1] = min_y;
			ans[count][2] = arr[min_x][min_y];
			++count;

			arr[min_x][min_y] = MAX;
			arr[min_y][min_x] = MAX;
			
			rep[min_x] = min_x;
			int change = rep[min_y];
			for(int i=0;i<=v;++i){
				if(rep[i]==change)
					rep[i] = min_x;
			}
		}

		//halting condition
		int flag = 0;
		for(int i=0;i<=v;++i){
			for(int j=0;j<=v;++j){
				if(arr[i][j]!=MAX)
					++flag;
			}
		}
		if(flag == 0)
			return count;
	}
}

int main(){
	int v, e, x, y, w;
	int **arr;
	int *visit, *rep;
	int **ans;

	printf("Vertices: ");
	scanf("%d",&v);
	printf("Edges: ");
	scanf("%d",&e);

	arr = new int*[v+1];
	for(int i=0;i<=v;++i)
		arr[i] = new int[v+1];
	visit = new int[v+1];
	rep = new int[v+1];

	ans = new int*[(v+1)*(v+1)];
	for(int i=0;i<(v+1)*(v+1);++i)
		ans[i] = new int[3];

	for(int i=0;i<=v;++i)
		for(int j=0;j<=v;++j)
			arr[i][j] = MAX;

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

	for(int i=0;i<=v;++i){
		visit[i] = 0;
		rep[i] = -1;
	}
	
	int count = kruskal(arr, v, rep, ans);

	print(rep, v);
	for(int i=0;i<count;++i){
		printf("%d %d %d\n",ans[i][0],ans[i][1],ans[i][2]);
	}

	return 0;
}