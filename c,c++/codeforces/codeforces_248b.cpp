#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n, i, ans, net;

	scanf("%d",&n);

	if(n<3)
		printf("-1\n");
	else if(n == 3)
		printf("210\n");
	else{
		ans = 1;
		for( i=1 ; i<n ; ++i ){
			ans *= 10;
			ans %= 210;
		}
		net = 210 - ans;

		if(n>3)
			printf("1");

		for(i=4;i<n;++i){
			printf("0");
		}

		if(net < 10){
			printf("00%d", net);
		}
		else if(net < 100){
			printf("0%d", net);
		}
		else
			printf("%d", net);

		printf("\n");
	}

	return 0;
}