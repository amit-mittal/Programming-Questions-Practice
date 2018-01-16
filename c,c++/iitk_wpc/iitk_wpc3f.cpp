#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
#define s(n) scanf("%d", &(n))
#define sll(n) scanf("%lld", &(n))
#define ll long long
#define ull unsigned long long

int dig(ull num){
	int sum = 0;
	while(num>0){
		sum+=(num%10);
		num/=10;
	}
	return sum;
}

ull func(ull num){
	for(ull i = num;;++i){
		if(i%dig(i)==0)
			return i;
	}
}

int main() {
	int test;
	s(test);
	while(test--){
		ull num;
		scanf("%llu", &num);
		printf("%llu\n", func(num));
	}
	return 0;
}