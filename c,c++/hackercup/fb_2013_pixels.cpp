#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, a, b, c, d, x, y, n, p, q, h, w, i, j;

	scanf("%d",&test);

	while(test--){
		int a1[100][100]={0};
		scanf("%d %d %d %d %d %d %d %d %d %d %d", &w, &h, &p, &q, &n, &x, &y, &a, &b, &c, &d);
		int x1[100],y1[100];

		x1[0]=x;y1[0]=y;

		a1[x][y]=1;
		for(i=1;i<n;++i){
			x1[i]=(x1[i - 1] * a + y1[i - 1] * b + 1) % w ;
			y1[i]=(x1[i - 1] * c + y1[i - 1] * d + 1) % h;
			a1[x1[i]][y1[i]]=1;
		}

		for(i=0;i<h;++i){
			for(j=0;j<w;++j){
				printf("%d ", a1[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}