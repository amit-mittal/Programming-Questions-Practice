#include <iostream>
#include <cstdio>

using namespace std;

#define s(n) scanf("%d",&n)

int main(){
	int n, count = 0;
	s(n);
	while(n--){
		bool ans = false;
		int a[6];
		for(int i=0;i<6;++i){
			s(a[i]);
		}

		int v1x = a[2]-a[0];
		int v1y = a[3]-a[1];
		int u1x = a[4]-a[0];
		int u1y = a[5]-a[1];
		if((u1x*v1x)+(u1y*v1y) == 0)
			ans = true;

		v1x = a[0]-a[2];
		v1y = a[1]-a[3];
		u1x = a[4]-a[2];
		u1y = a[5]-a[3];
		if((u1x*v1x)+(u1y*v1y) == 0)
			ans = true;

		v1x = a[2]-a[4];
		v1y = a[3]-a[5];
		u1x = a[0]-a[4];
		u1y = a[1]-a[5];
		if((u1x*v1x)+(u1y*v1y) == 0)
			ans = true;

		if(ans)
			++count;
	}
	printf("%d\n", count);
	return 0;
}
