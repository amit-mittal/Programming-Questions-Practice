#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n, i, count;
	char ch;
	int a[1000005];

	scanf("%d",&n);

	getchar();
	a[0] = 0;
	for(i=0;i<n;++i){
		ch = getchar();

		if(ch == 'A'){
			count = 0;
			a[i] = a[i-1];
		}
		else if(ch == 'B'){
			++count;
			if(i-count>=0)
				a[i] = min(a[i-1]+1, a[i-count]+2);
			else
				a[i] = 1;
		}
	}

	for(i=0;i<n;++i){
		printf("%d\n", a[i]);
	}

	return 0;
}