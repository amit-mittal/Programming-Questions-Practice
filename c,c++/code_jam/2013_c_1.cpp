#include <iostream>
#include <cstdio>
#include <cmath>

#define ll long long
#define s(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)

using namespace std;

int main(){
	ll int arr[] = {1,2,11,22,101,111,121,202,212,1001,1111,2002,10001,10101,10201,11011,11111,11211,20002,20102,100001,101101,110011,111111,200002,1000001,1001001,1002001,1010101,1011101,1012101,1100011,1101011,1102011,1110111,1111111,2000002,2001002,10000001,10011001,10100101,10111101,11000011,11011011,11100111,11111111,20000002};
	int test;
	ll int a, b, l, g, count;

	s(test);
	
	for(int t=1;t<=test;++t){
		count = 0;
		sl(a), sl(b);

		l = sqrt(a);
		g = sqrt(b);

		if(l*l<a){
			l+=1;
		}

		if(l<=3 && g>=3){
			++count;
		}

		for(int i=0;i<48;++i){
			if(arr[i]>=l && arr[i]<=g)
				++count;
		}
		
		printf("Case #%d: %lld\n", t, count);
	}
	return 0;
}