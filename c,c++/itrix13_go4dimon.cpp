#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, i, j, n, a[205][205];

	scanf("%d",&test);

	while(test--){
		scanf("%d",&n);

		for(i=0;i<n/2;++i){
			for(j=0;j<=i;++j){
				scanf("%d",&a[i][j]);
			}
		}

		for(i=n/2;i<n;++i){
			for(j=0;j<n-i;++j){
				scanf("%d",&a[i][j]);
			}
		}

		for(i=n-2;i>=n/2;--i){
			for(j=0;j<n-i;++j){
				if(j==0){
					a[i][j]+=a[i+1][j];
				}
				else if(j==n-i-1){
					a[i][j]+=a[i+1][j-1];
				}
				else
					a[i][j]+=max(a[i+1][j-1], a[i+1][j]);
			}
		}

		for(i=n/2-1;i>=0;--i){
			for(j=0;j<=i;++j){
				a[i][j]+=max(a[i+1][j], a[i+1][j+1]);
			}
		}

		printf("%d\n", a[0][0]);
	}

	return 0;
}