#include <iostream>
#include <cstdio>

using namespace std;

void print(int a[][50], int row, int col){
	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int test, row, col;
	char a[50][50];

	scanf("%d", &test);
	while(test--){
		scanf("%d %d", &row, &col);
		for(int i=0;i<row;++i){
			scanf("%s", a[i]);
		}

		int b[50][50] = {0};
		int c[50][50] = {0};
		int d[50][50] = {0};
		int e[50][50] = {0};

		for(int i=0;i<row;++i){
			int wall = -1;
			for(int j=0;j<col;++j){
				if(a[i][j]!='#'){
					b[i][j] = j-wall-1;
				} else {
					wall = j;
				}
			}
		}

		for(int i=0;i<row;++i){
			int wall = col;
			for(int j=col-1;j>=0;--j){
				if(a[i][j]!='#'){
					c[i][j] = wall-j-1;
				} else {
					wall = j;
				}
			}
		}

		for(int i=0;i<col;++i){
			int wall = -1;
			for(int j=0;j<row;++j){
				if(a[j][i]!='#'){
					d[j][i] = j-wall-1;
				} else {
					wall = j;
				}
			}
		}

		for(int i=0;i<col;++i){
			int wall = row;
			for(int j=row-1;j>=0;--j){
				if(a[j][i]!='#'){
					e[j][i] = wall-j-1;
				} else {
					wall = j;
				}
			}
		}
/*
		print(b, row, col);printf("\n");
		print(c, row, col);printf("\n");
		print(d, row, col);printf("\n");
		print(e, row, col);printf("\n");
*/
		int count = 0;
		for(int i=0;i<row;++i){
			for(int j=0;j<col;++j){
				if(a[i][j]=='^' && b[i][j]>=2 && c[i][j]>=2 && d[i][j]>=2 && e[i][j]>=2){
					++count;
				}
			}
		}

		printf("%d\n", count);
	}
	return 0;
}
