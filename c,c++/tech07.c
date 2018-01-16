#include <stdio.h>

int main(){
	int test,n;

	scanf("%d",&test);

	while(test--){
		scanf("%d",&n);

		printf("%lld\n",(long long int) 10*n*n*n-6*n*n);
	}

	return 0;
}