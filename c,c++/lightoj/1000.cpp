#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, x, y;
	
	scanf("%d", &test);
	for(int i=1;i<=test;++i){
		scanf("%d %d", &x, &y);
		printf("Case %d: %d\n", i, x+y);
	}
	return 0;
}
