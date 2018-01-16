#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

int main(){
	int k, d;
	s(k), s(d);
	if(k>1 && d==0){
		printf("No solution\n");
		return 0;
	}
	
	for(int i=0;i<k-1;++i){
		printf("9");
	}
	printf("%d\n", d);
	return 0;
}