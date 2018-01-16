#include <iostream>
#include <cstdio>
#include <algorithm>

#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)

using namespace std;

int main(){
	int test, n;
	long long int a[10],m;
	s(test);
	while(test--){
		s(n), sll(m);
		for(int i=0;i<n;++i)
			sll(a[i]);
		sort(a, a+n);
		long long int sum=0;
		int count = -1;
		for(int i=n-1;i>=0;--i){
			sum+=a[i];
			if(sum>=m){
				count = i;
				break;
			}
		}
		if(count>=0 && sum>=m)
			printf("%d\n", n-count);
		else
			printf("-1\n");
	}
	return 0;
}