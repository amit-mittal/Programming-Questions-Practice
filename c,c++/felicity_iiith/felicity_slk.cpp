#include <iostream>
#include <cstdio>

using namespace std;
#define ll long long

int main() {
	int n;
	ll val;
	scanf("%d", &n);
	
	for(int i=0;i<n;++i){
		scanf("%lld", &val);
		if(val>=5){
			printf("2\n");
		} else {
			printf("1\n");
		}
	}

	return 0;
}