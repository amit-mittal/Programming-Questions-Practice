#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int test, n;
	int a[102];
	scanf("%d",&test);

	while(test--){
		scanf("%d",&n);
		for(int i=0;i<n;++i){
			scanf("%d",&a[i]);
		}

		sort(a,a+n);
		int count = 0;
		for(int i=0;i<n;++i){
			if(a[i]==-1)
				continue;

			for(int j=i+1;j<n;++j){
				if(a[j]==-1)
					continue;

				int v1 = a[i];
				int v2 = a[j];

				if((v1 == (v2/2)) && (v2%2==0)){
					++count;
					a[i] = -1;
					a[j] = -1;
				}
			}
		}

		printf("%d\n", count);
	}
	return 0;
}
