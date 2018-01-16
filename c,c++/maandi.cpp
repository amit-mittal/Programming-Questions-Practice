#include <iostream>
#include <cstdio>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)

bool check(int n){
	while(n>0){
		int rem = n%10;
		if(rem==4 || rem==7)
			return true;
		n = n/10;
	}
	return false;
}

int main(){
	int test;
	s(test);
	while(test--){
		int count = 0;
		int a;
		s(a);

		int i;
		for(i=1;i*i<a;++i){
			if(a%i==0){
				if(check(i)){
//					cout<<i<<endl;
					++count;
				}
				if(check(a/i)){
//					cout<<(a/i)<<endl;
					++count;
				}
			}
		}

		if(i*i==a){
			if(check(i))
				++count;
		}

		printf("%d\n", count);
	}

	return 0;
}