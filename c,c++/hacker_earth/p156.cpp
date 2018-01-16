#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)

using namespace std;

int func(int n){
	int count=0;
	for(int i=1;i*i<=n;++i){
		if(n%i==0)
			++count;
	}

	return count;
}

int main(){
	int test;
	int n,a[1005];

	a[1]=1,a[2]=2,a[3]=3,a[4]=5;
	for(int i=5;i<=1003;++i){
		a[i]=a[i-1]+func(i);
	}

	s(test);
	while(test--){
		s(n);
		printf("%d\n", a[n]);
	}

	return 0;
}