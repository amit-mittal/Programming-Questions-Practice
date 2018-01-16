#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>

using namespace std;

int compare (const void *a, const void *b)
{
	if((**(int**)a)>(**(int**)b))
		return 1;
	else
		return -1;
}

int main(){
	int row,col,i,j;
	int **a;

	scanf("%d %d",&row,&col);

	a=(int **)malloc((row+1)*sizeof(int*));

	for(i=0;i<row;++i)
		a[i]=(int*)malloc((col+1)*sizeof(int));

	for(i=0;i<row;++i)
		for (j=0;j<col;++j)
			scanf("%d",&a[i][j]);

	printf("\n");

	for(i=0;i<row;++i){
		for (j=0;j<col;++j)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	printf("\n");

	qsort (a, row, sizeof(a[0]), &compare);

	for(i=0;i<row;++i){
		for (j=0;j<col;++j)
			printf("%d ",a[i][j]);
		printf("\n");
	}

	return 0;
}