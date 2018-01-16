#include<stdio.h>

#define MOD 1000000007

int main(){
	int test,y,n;
	long long int p;

	scanf("%d",&test);

	while(test--){
		scanf("%lld %d",&p,&y);
		n=y-2000;

		while(n--){
			p*=p;
			if(p>MOD)
				p%=MOD;
		}

		printf("%lld\n",p);
	}

	return 0;
}