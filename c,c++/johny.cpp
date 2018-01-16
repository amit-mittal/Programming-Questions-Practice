#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, index, a[105], n;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		for(int i=1;i<=n;++i)
			scanf("%d", &a[i]);
		scanf("%d", &index);
		int count = 1;
		for(int i=1;i<=n;++i){
			if(a[i]<a[index])
				++count;
		}
		printf("%d\n", count);
	}
	return 0;
}
