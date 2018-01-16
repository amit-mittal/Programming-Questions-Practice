#include<iostream>
#include<stdio.h>

using namespace std;
long long int p[65][4][4];

#define MOD 1000000007

void equal(long long int a[4][4], long long int b[4][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			a[i][j]=b[i][j];
	}
}

void multiply(long long int a[4][4],long long int b[4][4], long long int source[4][4]){

	int i,j,k;
	for(i=0;i<4;++i){
		for(j=0;j<4;++j){
			source[i][j]=0;
			for(k=0;k<4;++k){
				
				source[i][j]+=((a[i][k]*b[k][j])%MOD);
				source[i][j]%=MOD;
			}
		}
	}
	

}

void matr(long long int c[4][4], long long int n){
	long long int dummy[4][4];
	int counter=1;
	while(n>0){
		if(n%2==1){
			multiply(c,p[counter],dummy);
			equal(c,dummy);
		}
		n = n/2;
		counter++;
	}
	
}

int main(){

	long long int k,test,i,j;
	long long int n,val1,val2,ans;
	long long int dummy[4][4];
	long long int a[4][4]={{1,2,3,1},{1,0,0,0},{0,1,0,0},{0,0,1,0}};
	scanf("%lld",&test);


	for(int i=1;i<=60;i++){

		equal(p[i],a);
		multiply(a,a,dummy);
		equal(a,dummy);

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

		matr(c,n-1);

		val1=(c[3][0]*12)%MOD;
		val1+=((c[3][1]*5)%MOD);
		val1%=MOD;
		val1+=(c[3][2]*2)%MOD;
		val1%=MOD;
		val1+=(c[3][3]*1)%MOD;
		val1%=MOD;
		printf("%lld\n",val1);
//		printf("%lld\n",ans);
	}

	return 0;
}