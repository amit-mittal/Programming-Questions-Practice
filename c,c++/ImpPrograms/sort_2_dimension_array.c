#include <stdio.h>
#include <stdlib.h>

int compare (void *pa, void *pb ) {
    int (*a)[3] = pa;
    int (*b)[3] = pb;
    if ( a[0][0] < b[0][0] ) return -1;
    if ( a[0][0] > b[0][0] ) return +1;
    return 0;
}

OR

int compare (const void *pa,const void *pb ) {
   /* int (*a)[3] = pa;
    int (*b)[3] = pb;
    if ( a[0][0] < b[0][0] ) return -1;
    if ( a[0][0] > b[0][0] ) return +1;
    return 0;*/

    if ( *(int*)(pa) < *(int*)(pb) ) return -1;
  	if ( *(int*)(pa) > *(int*)(pb) ) return 1;
    return 0;
}


int main(){
	int test,i,j,n,a[2005][3];

	scanf("%d",&test);

	while(test--){
		int d[2005]={0};

		scanf("%d",&n);

		for(i=0;i<n;++i){
			for(j=0;j<3;++j){
				scanf("%d",&a[i][j]);
			}
		}
		
		qsort (a, n, sizeof(a[0]), compare);

		for(i=0;i<n;++i){
			for(j=0;j<3;++j){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}