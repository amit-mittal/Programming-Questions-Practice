#include <stdio.h>
#include <iostream>

#define INRANGE(i,a,b) (i>=a && i<=b)

using namespace std;

int cons=0;

void func(int x, int y, int a[][11], int b[][11], int n){
	int i,j;

	if(x==n-1 && y==n-1){
/*
		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
				printf("%d",a[i][j]);
			printf("\n");
		}

		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
				printf("%d",b[i][j]);
			printf("\n");
		}
*/
		++cons;
		
		return ;
	}

	if(a[x][y]==1)
		return ;

	if(b[x][y]==1)
		return ;

	b[x][y]=1;

	for(i=-1;i<=1;++i){
		for(j=-1;j<=1;++j){
			if(i!=0 && j!=0)
				continue;

			if(INRANGE(x+i,0,n-1) && INRANGE(y+j,0,n-1)){
				func(x+i,y+j,a,b,n);
			}
		}
	}
	b[x][y]=0;
}

int main(){
	int n,a[11][11],b[11][11]={0},i,j;

	scanf("%d",&n);

	for(i=0;i<n;++i)
		for(j=0;j<n;++j)
			scanf("%d",&a[i][j]);

	func(0,0,a,b,n);

	printf("%d\n",cons);

	return 0;
}