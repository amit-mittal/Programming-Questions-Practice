#include <iostream>
#include <cstdio>

#define INFINITY 1000000000

using namespace std;

int main(){
	int n, b[102][102], a[102][102], m;
	
	while(scanf("%d",&n)==1){
		
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				b[i][j]=INFINITY;
			}
		}

		for(int i=0;i<n;++i){
			scanf("%d", &a[i][i]);
			b[i][i]=0;
		}
/*
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}
		printf("\n");

		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
*/
		for(int k=1;k<n;++k){
			for(int i=0;i<n-k;++i){
				m = i;
				for(int j=i;j<i+k;++j){
					if(((a[i][j]*a[j+1][i+k]) + b[i][j] + b[j+1][i+k]) < b[i][i+k]){
						b[i][i+k] = ((a[i][j]*a[j+1][i+k]) + b[i][j] + b[j+1][i+k]);
						m = j;
					}
				}
				a[i][i+k] = (a[i][m] + a[m+1][i+k])%100;
			}
		}
/*
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}
		printf("\n");

		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}*/
		printf("%d\n", b[0][n-1]);
	}

	return 0;
}