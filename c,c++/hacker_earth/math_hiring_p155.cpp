#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)

using namespace std;

int main(){
	int test,i,j,a[25][3];
	int b[25][3],n;

	s(test);
	while(test--){
		s(n);

		for(i=0;i<n;++i){
			for(j=0;j<3;++j)
				s(a[i][j]);
		}
		for(i=0;i<3;++i)
			b[0][i]=a[0][i];

		for(i=1;i<n;++i){
			for(j=0;j<3;++j){
				b[i][j] = a[i][j] + min(b[i-1][(j+1)%3], b[i-1][(j+2)%3]);
			}
		}

		printf("%d\n", min(b[n-1][0], min(b[n-1][1], b[n-1][2])));
	}
}