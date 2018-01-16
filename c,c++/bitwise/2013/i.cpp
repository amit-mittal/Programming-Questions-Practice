#include <stdio.h>
#include <iostream>

#define MOD 1000000007

using namespace std;

void multiply(long long int a[][4],long long int b[][4]){
	long long int c[4][4]={0},i,j,k;

	for(i=0;i<4;++i){
		for(j=0;j<4;++j){
			for(k=0;k<4;++k){
				a[i][k]%=MOD;
				b[k][j]%=MOD;

				c[i][j]+=((a[i][k]*b[k][j])%MOD);
				c[i][j]%=MOD;
			}
		}
	}
	
	for(i=0;i<4;++i)
		for(j=0;j<4;++j)
			a[i][j]=c[i][j];
}

void matr(long long int a[][4], long long int n){
	long long int c[4][4],i,j;

	if(n==2){
		multiply(a,a);
	}
	else if(n==1){
		return;
	}
	else{
		if(n&1){//odd
			for(i=0;i<4;++i)
				for(j=0;j<4;++j)
					c[i][j]=a[i][j];

			matr(a,n/2);
			multiply(a,a);
			multiply(a,c);
		}
		else{
			matr(a,n/2);
			multiply(a,a);
		}
	}
}

int main(){
	long long int test,i,j;
	long long int n,val1,val2,ans;

		for(i=2;;++i){
			long long int a[4][4]={{1,2,3,1},{1,0,0,0},{0,1,0,0},{0,0,1,0}};
			matr(a,i);
			cout<<i<<endl;
			if(a[0][0]==1 && a[1][1]==1 && a[2][2]==1 && a[3][3]==1)
				printf("%lld\n", i);
		}

	return 0;
}