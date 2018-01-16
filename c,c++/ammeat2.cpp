#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

#define s(n) scanf("%d",&n)

using namespace std;

int main(){
	int test, n, m;
	
	s(test);
	while(test--){
		s(n), s(m);

		if(n==1 && m==1){
			printf("1\n");
			continue;
		}

		if(2*m>n)
			printf("-1\n");
		else{		
			for(int i=1;i<=m;i++){
				printf("%d ", 2*i);
			}
			printf("\n");
		}
		
	}
	return 0;
}