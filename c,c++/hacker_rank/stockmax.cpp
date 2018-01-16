#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, n;
	int a[50005];

	scanf("%d",&test);
	
	while(test--){
		scanf("%d",&n);
		for(int i=0;i<n;++i){
			scanf("%d",&a[i]);
		}

		long long int ans = 0;
		int max = a[n-1];
		for(int i=n-2;i>=0;--i){
			if(a[i]<=max){
				ans+=(long long int)(max-a[i]);
			} else {
				max = a[i];
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
