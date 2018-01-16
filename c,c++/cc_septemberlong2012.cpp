#include<iostream>
#include<stdio.h>

#define MOD 1000000007

using namespace std;

void multiply(long long int a[][2],long long int b[][2]){
	long long int c[2][2]={0};
	int i,j,k;

	for(i=0;i<2;++i){
		for(j=0;j<2;++j){
			for(k=0;k<2;++k){
				if(a[i][k]>MOD)
					a[i][k]%=MOD;

				if(b[k][j]>MOD)
					b[k][j]%=MOD;

				c[i][j]+=a[i][k]*b[k][j];

				if(c[i][j]>MOD)
					c[i][j]%=MOD;
			}
		}
	}
	
	for(i=0;i<2;++i)
		for(j=0;j<2;++j)
			a[i][j]=c[i][j];
}

void matr(long long int a[][2], long long int n){
	long long int c[2][2];

	if(n==2){
		multiply(a,a);
	}
	else if(n<=1){
		return;
	}
	else{
		int i,j;

		if(n&1){//odd
			for(i=0;i<2;++i)
				for(j=0;j<2;++j)
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
	int test,i,j;
	long long int val,ans,n;

	scanf("%d",&test);

	while(test--){
		scanf("%lld",&n);

		long long int a[2][2]={{1,1},{1,0}};
		long long int b[2][2]={{1,1},{1,0}};

		matr(a,n-4);
		matr(b,n-1);

//			b[0][0]=(b[0][0]*5)+(b[0][1]*3);
//			b[1][0]=(b[1][0]*5)+(b[1][1]*3);
//			printf("%lld %lld\n",b[0][0],b[1][0]);
/*
		for(i=0;i<2;++i){
			for(j=0;j<2;++j)
				printf("%lld ",b[i][j]);
			printf("\n");
		}
*/		
		if(n>4){
			a[0][0]=(a[0][0]*44)+(a[0][1]*18);
//			a[1][0]=(a[1][0]*44)+(a[1][1]*18);
			ans=a[0][0];

			if(ans>MOD)
				ans%=MOD;

			b[0][0]=(b[0][0]*5)+(b[0][1]*3);
	//		b[1][0]=(b[1][0]*5)+(b[1][1]*3);
			
			if(b[0][0]>MOD)
				b[0][0]%=MOD;

			ans+=b[0][0];

			if(ans>MOD)
				ans%=MOD;
		}
		else if(n==4)
			ans=44;
		else if(n==3)
			ans=18;
		else if(n==2)
			ans=5;
		else
			ans=0;

		printf("%lld\n",ans);
	}

	return 0;
}