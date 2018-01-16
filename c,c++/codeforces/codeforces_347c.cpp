#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
	if(b==0){
		return a;
	} else {
		return gcd(b, a%b);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[105];
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	
	int hcf = gcd(a[0], a[1]);
	int m1 = max(a[0], a[1]);
	for(int i=2;i<n;++i){
		hcf = gcd(hcf, a[i]);
		if(a[i]>m1)
			m1 = a[i];
	}

	int c = m1/hcf;
	c = c-n;
	if(c&1)
		printf("Alice\n");
	else
		printf("Bob\n");
	
	return 0;
}