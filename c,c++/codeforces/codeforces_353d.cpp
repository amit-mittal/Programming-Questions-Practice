#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

char a[1000005];
int b[1000005];

int main(){
	ss(a);
	int len = strlen(a);

	int i=0;
	int count = 0;
	while(a[i]=='F'){
		++count;
		b[i] = 0;
		++i;
	}
	
	for(;i<len;++i){
		if(a[i]=='M'){
			b[i] = b[i-1];
		} else {
			if(i-count>b[i-1])
				b[i] = i-count;
			else
				b[i] = b[i-1] + 1;
			++count;
		}
	}

	printf("%d\n", b[len-1]);

	return 0;
}