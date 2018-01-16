#include<stdio.h>

long long int p[65][2][2];

#define MOD 1000000007

void equal(long long int a[2][2], long long int b[2][2]){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
			a[i][j]=b[i][j];
	}
}

void multiply(long long int a[2][2],long long int b[2][2], long long int source[2][2]){

	int i,j,k;
	for(i=0;i<2;++i){
		for(j=0;j<2;++j){
			source[i][j]=0;
			for(k=0;k<2;++k){
				
				source[i][j]+=((a[i][k]*b[k][j])%MOD);
				source[i][j]%=MOD;
			}
		}
	}
	

}

void matr(long long int c[2][2], long long int n){
	long long int dummy[2][2];
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
	long long int dummy[2][2];
	long long int a[2][2]={{1,1},{1,0}};
	scanf("%lld",&test);


	for(i=1;i<=64;i++){

		equal(p[i],a);
		multiply(a,a,dummy);
		equal(a,dummy);

	}
	
	while(test--){
		long long int c[2][2]={0};
		for(i=0;i<2;++i)
			c[i][i]=1;
		scanf("%lld",&n);

		if(n<=2){
			if(n==1)
				printf("1\n");
			else if(n==2)
				printf("2\n");
			continue;
		}

		matr(c,n-2);

		val1=(c[0][0]*2)%MOD;
		val1+=((c[0][1]*1)%MOD);
		val1%=MOD;
		printf("%lld\n",val1);
	}

	return 0;
}