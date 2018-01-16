#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main(){
	int test, i, a[105], count;
	int n, hcf, j;

	scanf("%d", &test);

	while(test--){
		count = 0;
		scanf("%d", &n);

		for(i=0;i<n;++i){
			scanf("%d",&a[i]);
		}

		sort(a, a+n);

		for(i=0;i<n-1;++i){
			for(j=i+1;j<n;++j){
				hcf = gcd(a[i], a[j]);

				if(hcf == 1)
					++count;
			}
		}

		printf("%d\n", count);
	}

	return 0;
}