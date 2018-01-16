#include<stdio.h>

#define MOD 1000000007

long long int func(long long int n){
	long long int x;

	if(n<=0)
		return 1;
	
	if(n&1){//odd
		x=func(n/2);

		if(x>MOD)
			x%=MOD;
		
		x=x*x;

		if(x>MOD)
			x%=MOD;

		x=2*x;

		if(x>MOD)
			x%=MOD;

		return x;
	}
	else{
		x=func(n/2);

		if(x>MOD)
			x%=MOD;

		x=x*x;

		if(x>MOD)
			x%=MOD;

		return x;
	}
}

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
	else if(n==1){
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

int main(){
	long long int test,i,j;
	long long int n,val1,val2,ans;

	scanf("%lld",&test);

	while(test--){
		scanf("%lld",&n);

		long long int a[3][3]={{1,1,1},{1,0,0},{0,1,0}};

		val1=func(n);
		matr(a,n);

		val2=(a[2][0]*4)+(a[2][1]*2)+a[2][2];

		if(val2>MOD)
			val2%=MOD;

		ans=val1-val2;

		while(ans<0){
			ans+=MOD;
		}

		printf("%lld\n",ans);
	}

	return 0;
}