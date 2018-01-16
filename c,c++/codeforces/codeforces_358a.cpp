#include <iostream>
#include <cstdio>

using namespace std;

bool l(int a, int b, int c){
	if(c<a && c>b)
		return true;
	if(c<b && c>a)
		return true;
	return false;
}

int main(){
	int n, a[1005];
	scanf("%d", &n);
	for(int i=0;i<n;++i)
		scanf("%d", &a[i]);

	if(n<4){
		printf("yes\n");
		return 0;
	}

	bool ans = true;
	for(int i=3;i<n;++i){
		for(int j=1;j<i-1;++j){
			if( ((l(a[j], a[j-1], a[i])) && !(l(a[j], a[j-1], a[i-1]))) || ((l(a[j], a[j-1], a[i-1])) && !(l(a[j], a[j-1], a[i]))) ){
				ans = false;
				break;
			}
		}
	}

	if(ans)
		printf("no\n");
	else
		printf("yes\n");

	return 0;
}
