#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test;
	long long int x;
	scanf("%d",&test);

	while(test--){
		scanf("%lld",&x);

		if((x & (~x + 1)) == x)
			printf("No\n");
		else
			printf("Yes\n");
	}
}