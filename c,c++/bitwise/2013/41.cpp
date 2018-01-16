#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

vector<long long int[4][4]> pre;

#define MOD 1000000007

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

void matr(long long int c[][4], long long int n){
	int counter=1;
	while(n>0){
		if(n%2==1)
			multiply(c,pre[counter]);
		n = n/2;
		counter++;
	}
	
}

int main(){

	long long int test,i,j,k;
	long long int n,val1,val2,ans;
	long long int b[62][4][4];
	long long int a[4][4]={{1,2,3,1},{1,0,0,0},{0,1,0,0},{0,0,1,0}};
	scanf("%lld",&test);

	pre.push_back(a);
	for(i=1;i<62;++i){
		long long int c[4][4];

		for(k=0;k<4;++k)
			for(j=0;j<4;++j)
				c[k][j]=pre[i-1][k][j];
		multiply(c,c);
		pre.push_back(c);
	}

	while(test--){
		long long int c[4][4]={0};
		for(i=0;i<4;++i)
			c[i][i]=1;
		scanf("%lld",&n);

		if(n<=4){
			if(n==1)
				printf("1\n");
			else if(n==2)
				printf("2\n");
			else if(n==3)
				printf("5\n");
			else if(n==4)
				printf("12\n");
			continue;
		}

		for(n=2;n<20;++n){
			matr(c,n-1);
			for(i=0;i<4;++i){
				for(j=0;j<4;++j){
					printf("%lld ", a[i][j]);
				}
				printf("\n");
			}
		}
/*
		val1=(c[3][0]*12)%MOD;
		val1+=((c[3][1]*5)%MOD);
		val1%=MOD;
		val1+=(c[3][2]*2)%MOD;
		val1%=MOD;
		val1+=(c[3][3]*1)%MOD;
		val1%=MOD;
		printf("%lld\n",val1);
//		printf("%lld\n",ans);
*/	}

	return 0;
}