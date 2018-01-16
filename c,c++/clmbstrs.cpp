#include <iostream>
#include <cstdio>
#include <cstring>

#define MOD 1000000007

using namespace std;

long long int fibonacci(int n)
{
    long long int fib[2][2]= {{1,1},{1,0}},ret[2][2]= {{1,0},{0,1}},tmp[2][2]= {{0,0},{0,0}};
    int i,j,k;
    while(n)
    {
        if(n&1)
        {
            memset(tmp,0,sizeof tmp);
            for(i=0; i<2; i++)
            	for(j=0; j<2; j++)
            		for(k=0; k<2; k++){
                        tmp[i][j]=(tmp[i][j]+ret[i][k]*fib[k][j]);
                        if(tmp[i][j]>MOD)
                        	tmp[i][j]%=MOD;
                    }

            for(i=0; i<2; i++)
            	for(j=0; j<2; j++)
            		ret[i][j]=tmp[i][j];
        }
        memset(tmp,0,sizeof tmp);
        for(i=0; i<2; i++)
        	for(j=0; j<2; j++)
        		for(k=0; k<2; k++){
                    tmp[i][j]=(tmp[i][j]+fib[i][k]*fib[k][j]);
                    if(tmp[i][j]>MOD)
                        	tmp[i][j]%=MOD;
                }

        for(i=0; i<2; i++)
        	for(j=0; j<2; j++)
        		fib[i][j]=tmp[i][j];
        n/=2;
    }
    return (ret[0][1]);
}

int main(){
	int test, i, ans, n ,g, val;
	int a[1000005], present;
	a[0]=1;
	a[1]=2;
	for(i=2;i<=1000001;++i){
		a[i]=a[i-1]+a[i-2];
		if(a[i]>MOD)
			a[i]%=MOD;
	}

	scanf("%d",&test);
	while(test--){
		scanf("%d %d", &n, &g);
		present = a[n-1];

		ans=0;
		while(present>0){
			ans += present%2;
			present/=2;
		}

		if(ans==g)
			printf("CORRECT\n");
		else
			printf("INCORRECT\n");
	}

	return 0;
}