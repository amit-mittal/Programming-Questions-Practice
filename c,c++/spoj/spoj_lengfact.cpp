#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, rem;
	unsigned long long int n, i, count;

	scanf("%d",&test);

	while(test--){
		count = 0;
		rem = 1;
		
		scanf("%lld",&n);

		for(i=2;i<=n;++i){
			rem*=i;

			while(rem>=10){
				rem/=10;
				++count;
			}
		}

		while(rem>0){
			rem/=10;
			++count;
		}

		printf("%lld\n", count);
	}

	return 0;
}