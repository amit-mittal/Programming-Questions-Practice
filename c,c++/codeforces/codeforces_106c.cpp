#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n, m, c, d;
	int b[10][4];
	int a[1005][11] = {0};
	scanf("%d%d%d%d",&n,&m,&c,&d);

	for(int i=0;i<m;++i)
		for(int j=0;j<4;++j)
			scanf("%d",&b[i][j]);

	a[0][0]=0;
	for(int i=1;i<=n;++i){
		if(i>=c)
			a[0][i]=a[0][i-c]+d;
		else
			a[0][i] = a[0][i-1];
	}

	for(int j=0;j<=m;++j){
		a[j][0]=0;
	}

	for(int i=1;i<=m;++i){
		for(int j=1;j<=n;++j){
			a[i][j] = max(a[i-1][j], a[i][j-1]);
			if(j>=c){
				int val = d + a[i][j-c];
				if(val>a[i][j])
					a[i][j] = val;
			}
			if(b[i-1][0]>=b[i-1][1]){
				if(j>=b[i-1][2]){
					int val = b[i-1][3] + a[i][j-b[i-1][2]];
					if(val>a[i][j]){
						a[i][j] = val;
						b[i-1][0]-=b[i-1][1];
					}
				}
			}
		}
	}
	for(int i=0;i<=m;++i){
		for(int j=0;j<=n;++j)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("%d\n", a[m][n]);

	return 0;
}