#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int test,i,j,r,c,a[501][501];

	scanf("%d",&test);

	while(test--){
		int b[501][501]={0};

		scanf("%d %d", &r, &c);

		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				scanf("%d",&a[i][j]);
			}
		}

		for(i=c-2;i>=0;--i){
			if(a[r-1][i]<0){
				b[r-1][i]=b[r-1][i+1]-a[r-1][i];
			}
			else if(a[r-1][i]>0){
				if(a[r-1][i]>=b[r-1][i+1]){
					b[r-1][i]=0;
				}
				else{
					b[r-1][i]=b[r-1][i+1]-a[r-1][i];
				}
			}
			else{
				b[r-1][i]=b[r-1][i+1];
			}
		}

		for(i=r-2;i>=0;--i){
			if(a[i][c-1]<0){
				b[i][c-1]=b[i+1][c-1]-a[i][c-1];
			}
			else if(a[i][c-1]>0){
				if(a[i][c-1]>=b[i+1][c-1]){
					b[i][c-1]=0;
				}
				else{
					b[i][c-1]=b[i+1][c-1]-a[i][c-1];
				}
			}
			else{
				b[i][c-1]=b[i+1][c-1];
			}
		}

		for(i=r-2;i>=0;--i){
			for(j=c-2;j>=0;--j){
				if(a[i][j]<0){
					b[i][j]=min(b[i][j+1],b[i+1][j])-a[i][j];
				}
				else if(a[i][j]>0){
					if(a[i][j]>min(b[i][j+1],b[i+1][j]))
						b[i][j]=0;
					else{
						b[i][j]=min(b[i][j+1],b[i+1][j])-a[i][j];
					}
				}
				else{
					b[i][j]=min(b[i][j+1],b[i+1][j]);
				}
			}
		}
/*
		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}*/

		printf("%d\n", b[0][0]+1);
	}

	return 0;
}