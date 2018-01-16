#include <stdio.h>
#include <stdlib.h>
/*
int compare (const void *ap, const void *bp)
{
	if((**(int**)ap)>(**(int**)bp))
		return 1;
	else if((**(int**)ap)<(**(int**)bp))
		return -1;

	return 0;
}
*/
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


void func(int a[][3],int d[],int index,int n){
	if(index==n-1){//base case
		d[index]=a[index][2];
	}
	else{
		int val1,val2,i;

		if(d[index+1]==0)
			func(a,d,index+1,n);
			
		val1=d[index+1];

		i=index;
		while(a[i][0]<a[index][1] && i<n)
			++i;

		if(i==n){
			val2=a[index][2];
		}
		if(i<n){
			if(d[i]==0)
				func(a,d,i,n);

			val2=a[index][2]+d[i];
		}
		d[index]=(val1>val2)?val1:val2;
	}
}

int main(){
	int test,i,j,n,a[2005][3];

	scanf("%d",&test);

	while(test--){
		int d[2005]={0};

		scanf("%d",&n);
/*
		a=(int**)malloc((n+1)*sizeof(int*));

		for(i=0;i<n;++i)
			a[i]=(int*)malloc(4*sizeof(int));
*/
		for(i=0;i<n;++i){
			for(j=0;j<3;++j){
				scanf("%d",&a[i][j]);
			}
		}
		
		qsort (a, n, sizeof(a[0]), compare);
/*
		for(i=0;i<n;++i){
			for(j=0;j<3;++j){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
*/
		func(a,d,0,n);

		printf("%d\n", d[0]);
/*
		for(i=0;i<n;++i)
			free(a[i]);	

		free(a);	
*/	}

	return 0;
}