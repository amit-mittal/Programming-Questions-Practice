#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)

int main(){
	int test;
	s(test);
	while(test--){
		char a[1000005];
		scanf("%s", a);
		int len = strlen(a);
		int b[1000005];

		if(a[len-1]=='a' || a[len-1]=='z')
			b[len-1] = len-1;
		else
			b[len-1] = -1;

		for(int i=len-2;i>=0;--i){
			if(a[i]=='a' || a[i]=='z')
				b[i] = i;
			else{
				b[i] = b[i+1];
			}
		}

		ll int count = 0;
		for(int i=0;i<len;++i){
			if(b[i]!=-1)
				count = count + (ll int)(len - b[i]);
		}

		printf("%lld\n", count);
	}
	return 0;
}