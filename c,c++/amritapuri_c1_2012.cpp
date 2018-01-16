#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
	int test,n,l,h,i,a[1005],j,k,m;
	int b[1000005];

	scanf("%d",&test);

	while(test--){
		ans=0;

		scanf("%d %d %d",&n,&l,&h);

		for(i=0;i<n;++i){
			scanf("%d",&a[i]);
		}

		qsort(a,n,sizeof(int),compare);

	}

	return 0;
}