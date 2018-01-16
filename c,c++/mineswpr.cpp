#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)

using namespace std;

int n,m,k;
int a[51][51], visit[51][51];

void defuse(int x, int y){
	printf("N %d %d\n", x, y);
	fflush(stdout);
	--k;
	--m;
}

void next(int choice, int x, int y){
	if(choice==0){
		for(int i=-1;i<2;++i){
			for(int j=-1;j<2;++j){
				a[x+i][y+j]=0;
			}
		}
	}
	else if(choice==8){
		for(int i=-1;i<2;++i){
			for(int j=-1;j<2;++j){
				if(i==0 && j==0)
					continue;
				a[x+i][y+j]=-2;
				defuse(x+i,y+j);
			}
		}	
	}
	else if(choice=='M'){
		defuse(x,y);
		a[x][y]='M';
	}
}

void survey(int x, int y){
	if(visit[x][y]!=1){
		printf("S %d %d\n", x, y);
		fflush(stdout);
		s(a[x][y]);
		visit[x][y]=1;
		next(a[x][y], x, y);
	}
	else{
		return;
	}
}

int main(){
	int c;

	s(n),s(m),s(k);

	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			a[i][j]=visit[i][j]=-1;

	printf("S 0 0\n");
	visit[0][0]=1;
	fflush(stdout);
	s(c);
	a[0][0]=c;

	if(c==0){

	}else if(c==1){

	}else if(c==2){

	}else if(c==3{

	}else if(c=='M'){

	}

	return 0;
}