#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	int test;
	scanf("%d", &test);
	while(test--){
		int n;
		int arr[100005];
		scanf("%d", &n);
		for(int i=0;i<n;++i)
			scanf("%d", &arr[i]);
		long long ans = (long long)n*(n-1);
		ans/=2;
		printf("%lld\n", ans);
	}
  	return 0;
}