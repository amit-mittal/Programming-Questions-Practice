#include <stdio.h>

#define us unsigned

us int c, r, a[501][501], b[501][501];

void func(us int i, us int j, us int t){
	if(i>0){
		if(a[i-1][j]=='.'){
			a[i-1][j]=a[i][j];
			b[i-1][j]=t;
			func(i-1, j, t+1);
		}
		else if(a[i-1][j]>='a' && a[i-1][j]<='z'){
			if(b[i-1][j]>t){
				a[i-1][j]=a[i][j];
				b[i-1][j]=t;
				func(i-1, j, t+1);	
			}
			else if(b[i-1][j]==t)
				a[i-1][j]='*';
		}
	}

	if(i<r-1){
		if(a[i+1][j]=='.'){
			a[i+1][j]=a[i][j];
			b[i+1][j]=t;
			func(i+1, j, t+1);
		}
		else if(a[i+1][j]>='a' && a[i+1][j]<='z'){
			if(b[i+1][j]>t){
				a[i+1][j]=a[i][j];
				b[i+1][j]=t;
				func(i+1, j, t+1);	
			}
			else if(b[i+1][j]==t)
				a[i+1][j]='*';
		}
	}

	if(j>0){
		if(a[i][j-1]=='.'){
			a[i][j-1]=a[i][j];
			b[i][j-1]=t;
			func(i, j-1, t+1);
		}
		else if(a[i][j-1]>='a' && a[i][j-1]<='z'){
			if(b[i][j-1]>t){
				a[i][j-1]=a[i][j];
				b[i][j-1]=t;
				func(i, j-1, t+1);	
			}
			else if(b[i][j-1]==t)
				a[i][j-1]='*';
		}
	}

	if(j<c-1){
		if(a[i][j+1]=='.'){
			a[i][j+1]=a[i][j];
			b[i][j+1]=t;
			func(i, j+1, t+1);
		}
		else if(a[i][j+1]>='a' && a[i][j+1]<='z'){
			if(b[i][j+1]>t){
				a[i][j+1]=a[i][j];
				b[i][j+1]=t;
				func(i, j+1, t+1);	
			}
			else if(b[i][j+1]==t)
				a[i][j+1]='*';
		}
	}
}

int main(){
	us int test,i,j;
	char ch;

	scanf("%d",&test);

	while(test--){
		scanf("%d %d",&r,&c);

		for(i=0;i<=r;++i)
			for(j=0;j<=c;++j)
				b[i][j]=0;

		scanf("%c",&ch);

		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				scanf("%c",&a[i][j]);
			}
			scanf("%c",&ch);
		}

		for(i=0;i<r;++i){
			for(j=0;j<c;++j){
				if(a[i][j]>='a' && a[i][j]<='z' && b[i][j]==0){
					func(i, j, 1);
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
	}

	return 0;
}