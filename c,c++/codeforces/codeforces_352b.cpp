#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)

int main(){
	int n, x;
	int a[100005] = {0};
	int d[100005] = {0};

	s(n);
	for(int i=1;i<=n;++i){
		s(x);

		if(a[x]==0){
			a[x] = i;
			d[x] = 0;
		} else if(a[x]>0){
			if(d[x]==0){//second time
				int diff = i - a[x];
				a[x] = i;
				d[x] = diff;
			} else {
				int diff = i - a[x];
				if(diff == d[x]){
					a[x] = i;
				} else{
					a[x] = -1;
					d[x] = -1;
				}
			}
		}
	}

	int count = 0;
	for(int i=1;i<100002;++i){
		if(a[i]>0 && d[i]!=-1){
			++count;
		}
	}

	printf("%d\n", count);
	for(int i=1;i<100002;++i){
		if(a[i]>0 && d[i]!=-1){
			printf("%d %d\n", i, d[i]);
		}
	}

	return 0;
}