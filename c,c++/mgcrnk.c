#include <stdio.h>

int main(){
	int test,i,j,n,a[101][101];

	scanf("%d",&test);

	while(test--){
		scanf("%d",&n);

		for(i=0 ; i<n ; ++i){
			for(j=0;j<n;++j)
				scanf("%d",&a[i][j]);
		}

		for(i=n-1;i>=0;--i){
			for(j=n-1;j>=0;--j){
				if(i<n-1 && j<n-1){
					if(a[i][j+1]>a[i+1][j])
						a[i][j]+=a[i][j+1];
					else
						a[i][j]+=a[i+1][j];
				}
				else if(i==n-1 && j<n-1){
					a[i][j]+=a[i][j+1];
				}
				else if(i<n-1 && j==n-1){
					a[i][j]+=a[i+1][j];
				}
			}
		}

		if(a[0][0]<0)
			printf("Bad Judges\n");
		else{
			printf("%.6f\n", (float)a[0][0]/(2*n-3));
		}
	}

	return 0;
}