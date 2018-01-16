#include <stdio.h>
#include <iostream>

int c, r;

using namespace std;

void func(int a[][501], int b[][501], int i, int j, int t){
	if(i>0){
		if(a[i-1][j]=='.'){
			a[i-1][j]=a[i][j];
			b[i-1][j]=t;
			func(a, b, i-1, j, t+1);
		}
		else if(a[i-1][j]>='a' && a[i-1][j]<='z'){
			if(b[i-1][j]>t){
				a[i-1][j]=a[i][j];
				b[i-1][j]=t;
				func(a, b, i-1, j, t+1);	
			}
			else if(b[i-1][j]==t)
				a[i-1][j]='*';
		}
	}

	if(i<r-1){
		if(a[i+1][j]=='.'){
			a[i+1][j]=a[i][j];
			b[i+1][j]=t;
			func(a, b, i+1, j, t+1);
		}
		else if(a[i+1][j]>='a' && a[i+1][j]<='z'){
			if(b[i+1][j]>t){
				a[i+1][j]=a[i][j];
				b[i+1][j]=t;
				func(a, b, i+1, j, t+1);	
			}
			else if(b[i+1][j]==t)
				a[i+1][j]='*';
		}
	}

	if(j>0){
		if(a[i][j-1]=='.'){
			a[i][j-1]=a[i][j];
			b[i][j-1]=t;
			func(a, b, i, j-1, t+1);
		}
		else if(a[i][j-1]>='a' && a[i][j-1]<='z'){
			if(b[i][j-1]>t){
				a[i][j-1]=a[i][j];
				b[i][j-1]=t;
				func(a, b, i, j-1, t+1);	
			}
			else if(b[i][j-1]==t)
				a[i][j-1]='*';
		}
	}

	if(j<c-1){
		if(a[i][j+1]=='.'){
			a[i][j+1]=a[i][j];
			b[i][j+1]=t;
			func(a, b, i, j+1, t+1);
		}
		else if(a[i][j+1]>='a' && a[i][j+1]<='z'){
			if(b[i][j+1]>t){
				a[i][j+1]=a[i][j];
				b[i][j+1]=t;
				func(a, b, i, j+1, t+1);	
			}
			else if(b[i][j+1]==t)
				a[i][j+1]='*';
		}
	}
}

int main(){
	int test,a[501][501],i,j;

	scanf("%d",&test);

	while(test--){
		int b[501][501]={0};

		scanf("%d %d",&r,&c);

		getchar();

		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				scanf("%c",&a[i][j]);
			}
			getchar();
		}
/*
		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				printf("%c",a[i][j]);
			}
			printf("\n");
		}
*/
		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				if(a[i][j]>='a' && a[i][j]<='z' && b[i][j]==0){
					func(a, b, i, j, 1);
				}
			}
		}

		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				printf("%c",a[i][j]);
			}
			printf("\n");
		}

		printf("\n");
/*
		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}*/
	}

	return 0;
}