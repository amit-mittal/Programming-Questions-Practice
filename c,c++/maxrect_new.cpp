#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){
	int row,col,i,j,a[301][301],count=0,min=-1000000000,minrow,mincol,max_row_id,max_col_id;
	long long int max_col,max_row,b[301]={0},c[301]={0},maximum,sum;

	vector< vector <int> > vec1;
	vector< vector <int> > vec2;
	vector<int> ans_row;
	vector<int> ans_col;

	scanf("%d %d",&row,&col);

	vec1.resize(301);
	vec2.resize(301);
//	ans_row.resize(row);
//	ans_col.resize(col);

	for(i=0;i<row;++i){
		for(j=0;j<col;++j){
			scanf("%d",&a[i][j]);

			if(a[i][j]>0){
				b[i]+=a[i][j];
				c[j]+=a[i][j];

				vec1[i].push_back(j);
				vec2[j].push_back(i);
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

	if(max_row>=max_col && max_row>0){
		for(i=0;i<row;++i){
			sum=0;
			for(j=0;j<vec1[max_row_id].size();++j){
				sum+=a[i][vec1[max_row_id][j]];
			}
			if(sum>0){
				ans_row.push_back(i);
			}
		}

		printf("%d %d\n",ans_row.size(),vec1[max_row_id].size());

		for(i=0;i<ans_row.size();++i)
			printf("%d ",ans_row[i]);

		printf("\n");

		for(i=0;i<vec1[max_row_id].size();++i)
			printf("%d ",vec1[max_row_id][i]);

		printf("\n");
	}
	else if(max_row<max_col && max_col>0){
		for(i=0;i<col;++i){
			sum=0;
			for(j=0;j<vec2[max_col_id].size();++j){
				sum+=a[vec2[max_col_id][j]][i];
			}
			if(sum>=0){
				ans_col.push_back(i);
			}
		}

		printf("%d %d\n",vec2[max_col_id].size(),ans_col.size());

		for(i=0;i<vec2[max_col_id].size();++i)
			printf("%d ",vec2[max_col_id][i]);

		printf("\n");

		for(i=0;i<ans_col.size();++i)
			printf("%d ",ans_col[i]);		

		printf("\n");
	}

	if(max_row<=0 && max_col<=0){// if no positive entry in arrays
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