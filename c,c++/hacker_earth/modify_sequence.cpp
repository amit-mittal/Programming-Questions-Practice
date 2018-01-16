#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)

using namespace std;

int main(){
	int n, i, a[10005];
	s(n);

	for(int i=0;i<n;++i)
		s(a[i]);

	int result = a[0];
	for(int i=1;i<n;++i){
		result = a[i] - result;
	}

	if(result==0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}