#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

#define POINTS 3
#define DIMENSION 10

//0 - completely blank
//1 - covered completely
//2 - covered partially with 2 circles
//3 - covered partially with 1 circle

using namespace std;

int main(){
	int i,j,k,a[POINTS][2],b[DIMENSION+2][DIMENSION+2]={0},c[DIMENSION+2][DIMENSION+2]={0};
	int complete=0, partly=0, count, n, m;
	double area;

	srand((unsigned int)time(0));

	for(i=0;i<POINTS;++i){
		a[i][0]=1+(rand()%9);
		a[i][1]=1+(rand()%9);

		b[a[i][0]][a[i][1]]=1;
	}

	for(i=0;i<=DIMENSION;++i){
		for(j=0;j<=DIMENSION;++j){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i=1;i<DIMENSION;++i){
		for(j=1;j<DIMENSION;++j){
			if(b[i][j]==1){

				//upper left square
				count=0;
				for(m=-1;m<1;++m){
					for(n=-1;n<1;++n){
						if(m==0 && n==0)
							continue;
						else if(b[i+m][j+n]==1)
							++count;
					}
				}

				if(count==0){
					c[i-1][j-1]=3;
				}
				else if(count==1){
					if(b[i-1][j-1]==1)
						c[i-1][j-1]=1;
					else
						c[i-1][j-1]=2;
				}
				else{
					c[i-1][j-1]=1;
				}


				//upper right square
				count=0;
				for(m=-1;m<1;++m){
					for(n=0;n<2;++n){
						if(m==0 && n==0)
							continue;
						else if(b[i+m][j+n]==1)
							++count;
					}
				}

				if(count==0){
					c[i-1][j]=3;
				}
				else if(count==1){
					if(b[i-1][j+1]==1)
						c[i-1][j]=1;
					else
						c[i-1][j]=2;
				}
				else{
					c[i-1][j]=1;
				}


				//lower left square
				count=0;
				for(m=0;m<2;++m){
					for(n=-1;n<1;++n){
						if(m==0 && n==0)
							continue;
						else if(b[i+m][j+n]==1)
							++count;
					}
				}

				if(count==0){
					c[i][j-1]=3;
				}
				else if(count==1){
					if(b[i+1][j-1]==1)
						c[i][j-1]=1;
					else
						c[i][j-1]=2;
				}
				else{
					c[i][j-1]=1;
				}


				//lower right square
				count=0;
				for(m=0;m<2;++m){
					for(n=0;n<2;++n){
						if(m==0 && n==0)
							continue;
						else if(b[i+m][j+n]==1)
							++count;
					}
				}

				if(count==0){
					c[i][j]=3;
				}
				else if(count==1){
					if(b[i+1][j+1]==1)
						c[i][j]=1;
					else
						c[i][j]=2;
				}
				else{
					c[i][j]=1;
				}
			}
		}
	}

	for(i=0;i<DIMENSION;++i){
		printf(" ");
		for(j=0;j<DIMENSION;++j){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	area=0.0;
	for(i=0;i<DIMENSION;++i){
		for(j=0;j<DIMENSION;++j){
			if(c[i][j]==2){
				area+=0.04367;
			}
			else if(c[i][j]==0){
				area+=1.0;
			}
			else if(c[i][j]==3){
				area+=0.2142875;
			}
		}
	}

	printf("\nThe left out area is: %lf.\n", area);

	return 0;
}