#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)

using namespace std;

int main(){
	int test,n;
	s(test);

	while(test--){
		s(n);
		if(n%2==0 || n%3==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}