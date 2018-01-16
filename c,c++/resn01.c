#include<stdio.h>

int main(){
	int test,a[60005],b[20005],n,k,i,j;

	scanf("%d",&test);

	while(test--){
		scanf("%d %d",&n,&k);

		for(i=0;i<n;++i){
			scanf("%d",&a[i]);
			a[i+n]=a[i+(2*n)]=a[i];
			b[i]=a[i];
		}

		if(2*k+1>=n){
			k=n/2;
		}

		for(i=n;i<2*n;++i){
			for(j=i-k;j<=i+k;++j){
				b[i-n]=b[i-n]&a[j];
			}
		}

		for(i=0;i<n;++i)
			printf("%d ",b[i]);
		printf("\n");
	}

	return 0;
}