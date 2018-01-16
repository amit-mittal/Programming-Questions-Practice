#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)
#define num 103993
#define den 33102

using namespace std;

int main(){
	int test, n, i, a[1000005], curr, rem;

	s(test);

	a[0]=0;
	curr=num%den;
	curr*=10;
	for(i=1;i<1000004;++i){
		a[i] = curr/den;
		rem = curr%den;
		curr = rem*10;
	}

	while(test--){
		s(n);
		if(n==0){
			printf("3\n");
			continue;
		}
		printf("3.");
		for(i=1;i<=n;++i){
			printf("%d", a[i]);
		}
		printf("\n");
	}

	return 0;
}