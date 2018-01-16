#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;

int main() {
	scanf("%d %d", &n, &k);
	
	int a[101][101];
	
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i!=j)
				printf("%d ", 0);
			else
				printf("%d ", k);
		}
		printf("\n");
	}
	
	return 0;
}