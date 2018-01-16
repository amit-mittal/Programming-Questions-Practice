#include <iostream>
#include <cstdio>
using namespace std;
#define lim 10000

int main() {
	int test, n;
	int a[lim+5]={0};
	int ans[lim+5];
	
	for(int i=0;i<=lim;++i){
		ans[i] = i;
	}
	
	for(int i=2;i<=lim;++i){
		if(a[i]==0){
			int j = i;
			while(j<=lim){
				a[j] = 1;
				ans[j] -= (ans[j]/i);
				j+=i;
			}
		}
	}
	
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		long long int sum = 0LL;
		for(int i=1;i<=n;++i){
			sum+=(long long)ans[i];
		}
		sum*=sum;
		printf("%lld\n", sum);
	}
	return 0;
}