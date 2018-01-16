#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int prime(int n){
	int i;

	if(n==1)
		return 0;

	for(i=2;i<=sqrt(n);++i){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int test;
	long long int n;

	scanf("%d",&test);

	while(test--){
		cin>>n;

		if((int)sqrt(n)==(float)sqrt(n)){
			if(prime(sqrt(n))==1)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}

	return 0;
}