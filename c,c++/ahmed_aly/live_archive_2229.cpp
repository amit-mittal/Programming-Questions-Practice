#include <iostream>
#include <cstdio>

using namespace std;

#define s(n) scanf("%d", &n)

int main(){
	int n;
	s(n);
	while(n!=0){
		int x, a[50] = {0};
		for(int i=0;i<n;++i){
			for(int j=0;j<6;++j){
				s(x);
				a[x] = 1;
			}
		}
		
		bool ans = true;
		for(int i=1;i<50;++i){
			if(a[i]==0){
				ans = false;
				break;
			}
		}

		if(ans)
			printf("Yes\n");
		else
			printf("No\n");

		s(n);
	}
	return 0;
}