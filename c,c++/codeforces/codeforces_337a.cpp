#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n, m;
	int a[55];
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;++i){
		scanf("%d",&a[i]);
	}
	sort(a,a+m);
	int min_diff = 10000;
	for(int i=0;i<=m-n;++i){
		int diff = a[i+n-1] - a[i];
		if(diff<min_diff){
			min_diff = diff;
		}
	}
	printf("%d\n", min_diff);
	return 0;
}
