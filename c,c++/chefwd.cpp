#include<iostream>
#include<stdio.h>

#define MOD 1000000007

using namespace std;

void multiply(long long int a[][3],long long int b[][3]){
	long long int c[3][3]={0},i,j,k;

	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			for(k=0;k<3;++k){
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
	
	for(i=0;i<3;++i)
		for(j=0;j<3;++j)
			a[i][j]=c[i][j];
}

void matr(long long int a[][3], long long int n){
	long long int c[3][3],i,j;

	if(n==2){
		multiply(a,a);
	}
	else if(n<=1){
		return;
	}
	else{
		if(n&1){//odd
			for(i=0;i<3;++i)
				for(j=0;j<3;++j)
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

void multiply1(long long int a[][2],long long int b[][2]){
	long long int c[2][2]={0},i,j,k;

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

void matr1(long long int a[][2], long long int n){
	long long int c[2][2],i,j;

	if(n==2){
		multiply1(a,a);
	}
	else if(n<=1){
		return;
	}
	else{
		if(n&1){//odd
			for(i=0;i<2;++i)
				for(j=0;j<2;++j)
					c[i][j]=a[i][j];

			matr1(a,n/2);
			multiply1(a,a);
			multiply1(a,c);
		}
		else{
			matr1(a,n/2);
			multiply1(a,a);
		}
	}
}

int main(){
	long long int test,i,j;
	long long int val,ans,n;

	scanf("%lld",&test);

	while(test--){
		scanf("%lld",&n);

		long long int a[3][3]={{1,1,1},{1,0,0},{0,1,0}};
		long long int b[2][2]={{1,1},{1,0}};

		matr1(b,n-4);

		b[0][0]=(b[0][0]*3)+(b[0][1]*2);
		b[1][0]=(b[1][0]*3)+(b[1][1]*2);

		matr(a,n-4);

		a[0][0]=(a[0][0]*44)+(a[0][1]*18)+(5*b[0][0])+(3*b[1][0]);

		if(a[0][0]>MOD)
			a[0][0]%=MOD;

		if(n>4)
			printf("%lld\n",a[0][0]);
		else if(n==4)
			printf("44\n");
		else if(n==3)
			printf("18\n");
		else if(n==2)
			printf("5\n");
		else if(n<=1)
			printf("0\n");

		}

	return 0;
}
/*
		for(i=0;i<3;++i){
			for(j=0;j<3;++j)
				printf("%lld ",a[i][j]);
			printf("\n");
		}

		cout<<endl;

		for(i=0;i<2;++i){
			for(j=0;j<2;++j)
				printf("%lld ",b[i][j]);
			printf("\n");
		}
*/

/*		long long int b[2][2]={{1,1},{1,0}};
		long long int c[2][2]={{1,1},{1,0}};

		matr(a,n-3);
		matr(b,n-3);
		matr(c,n-4);

		a[0][0]=(a[0][0]*18)+(a[0][1]*5);
		a[1][0]=(a[1][0]*18)+(a[1][1]*5);

		for(i=0;i<2;++i){
			for(j=0;j<2;++j)
				printf("%lld ",a[i][j]);
			printf("\n");
		}

		cout<<endl;

		b[0][0]=(b[0][0]*3)+(b[0][1]*2);
		b[1][0]=(b[1][0]*3)+(b[1][1]*2);

		for(i=0;i<2;++i){
			for(j=0;j<2;++j)
				printf("%lld ",b[i][j]);
			printf("\n");
		}

		cout<<endl;

		c[0][0]=(c[0][0]*3)+(c[0][1]*2);
		c[1][0]=(c[1][0]*3)+(c[1][1]*2);

		for(i=0;i<2;++i){
			for(j=0;j<2;++j)
				printf("%lld ",c[i][j]);
			printf("\n");
		}

		cout<<endl;
*/		
//		a[0][0]=(a[0][0]*18)+(a[0][1]*5);
//		cout<<"a[0]: "<<a[0][0]<<endl;
/*		ans=a[0][0];

		if(ans>MOD)
			ans%=MOD;

//		b[0][0]=(b[0][0]*3)+(b[0][1]*2);
//		cout<<"b[0]: "<<b[0][0]<<endl;
		
		if(b[0][0]>MOD)
			b[0][0]%=MOD;

		ans+=b[0][0];

		if(ans>MOD)
			ans%=MOD;
	
		if(n>3)
			printf("%lld\n",ans);
		else if(n==3)
			printf("18\n");
		else if(n==2)
			printf("5\n");
		else if(n<=1)
			printf("0\n");*/
	