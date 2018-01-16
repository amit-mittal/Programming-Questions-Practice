#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(){
	int row,col,i,j,a[301][301],count=0,min=-1000000000,minrow,mincol,max_row_id,max_col_id;
	long long int max_col,max_row,b[301]={0},c[301]={0},maximum;

	scanf("%d %d",&row,&col);

	for(i=0;i<row;++i){
		for(j=0;j<col;++j){
			scanf("%d",&a[i][j]);

			if(a[i][j]>0){
				b[i]+=a[i][j];
				c[j]+=a[i][j];
			}
		}
	}

	max_row=b[0];
	max_row_id=0;
	for(i=0;i<col;++i){
		if(b[i]>max_row){
			max_row=b[i];
			max_row_id=i;
		}
	}

	max_col=c[0];
	max_col_id=0;
	for(i=0;i<row;++i){
		if(c[i]>max_col){
			max_col=c[i];
			max_col_id=i;
		}
	}

//	cout<<max_row<<endl<<max_col;

	if(max_row>max_col){
		for(i=0;i<row;++i){
			if(b[i]==max_row){
				printf("1 ");

				for(j=0;j<col;++j){
					if(a[i][j]>0)
						++count;
				}
				printf("%d\n%d\n",count,i);

				for(j=0;j<col;++j){
					if(a[i][j]>0)
						printf("%d ",j);
				}
			}
		}
		printf("\n");
	}
	else{
		for(i=0;i<col;++i){
			if(c[i]==max_col){
				for(j=0;j<row;++j){
					if(a[j][i]>0)
						++count;
				}
				printf("%d 1\n",count);

				for(j=0;j<row;++j){
					if(a[j][i]>0)
						printf("%d ",j);
				}

				printf("\n%d",i);
			}
		}
		printf("\n");
	}

	if(max_row==max_col && max_col==0){// if no positive entry in arrays
		for(i=0;i<row;++i){
			for(j=0;j<col;++j){
				if(a[i][j]>min){
					min=a[i][j];
					minrow=i;
					mincol=j;
				}
			}
		}

		printf("1 1\n");
		printf("%d\n%d\n",i,j);
	}

	return 0;
}