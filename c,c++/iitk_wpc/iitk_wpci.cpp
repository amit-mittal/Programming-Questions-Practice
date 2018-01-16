#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define s(n) scanf("%d",&n)

int arr[1003][1003];
int temp[1003];
int n;
int counter;

void dfs(int ver, int visit[]){
	temp[counter] = ver;++counter;
	visit[ver] = 1;
	
	for(int i=1;i<=n;++i){
		if(arr[ver][i] == 1){
			if(visit[i] == 0){
				dfs(i, visit);
			}
		}
	}
}

void sortRest(int a[]){
	sort(temp, temp+counter);
	for(int i=0;i<counter;++i){
		int in = temp[i];
		for(int j=i+1;j<counter;++j){
			int in2 = temp[j];
			if(a[in]>a[in2]){
				in = in2;
			}
		}
		swap(a[in], a[i]);
	}
}

int main(){
	int test, m;
	
	s(test);
	while(test--){
		int *a;
		int x, y;

		s(n), s(m);
		a = new int[n+1];
		for(int i=1;i<=n;++i){
			s(a[i]);
		}

		for(int i=0;i<=n;++i){
			for(int j=0;j<=n;++j){
				arr[i][j] = 0;
			}
		}

		for(int i=1;i<=m;++i){
			s(x), s(y);
			arr[x][y] = 1;
			arr[y][x] = 1;
		}

		int *visit;
		visit = new int[n+1];
		for(int i=1;i<=n;++i){
			if(visit[i] == 0){
				counter = 0;
				dfs(i, visit);
				sortRest(a);
			}
		}

		for(int i=1;i<=n;++i){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
