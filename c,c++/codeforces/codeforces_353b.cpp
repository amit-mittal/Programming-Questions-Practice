#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <assert.h>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

int n, x;
int a[105]={0};
int b[205];
int c[205]={0};

void loop(int v1, int v2, int val){
	int j=0;
//	printf("%d %d\n", v1, v2);
	for(;j<(2*n);++j){
		if(b[j]==val){
			c[j] = 1;
			--v1;
		}

//		printf("1 %d\n", j);
		if(v1==-1)
			break;
	}

	++j;
	for(;j<(2*n);++j){
//		printf("2 %d\n", j);
		if(b[j]==val){
			c[j] = 2;
			--v2;
		}

		if(v2==-1)
			break;
	}
}

int main(){
	s(n);
	for(int i=0;i<(2*n);++i){
		s(x);
		b[i] = x;
		++a[x];
	}

	int n1 = n;
	int n2 = n;
	for(int i=10;i<=100;++i){
		assert(n1>=0);
		assert(n2>=0);
		if(a[i]>=2){
			int v = a[i] - 2;
			int o1 = v/2;
			int o2 = v - o1;

			if(o1!=o2){
				int v1 = max(o1, o2);
				int v2 = min(o1, o2);
				
				if(n1>n2){
					n1-=v1;
					n2-=v2;
					loop(v1, v2, i);				
				} else {
					n1-=v2;
					n2-=v1;
					loop(v2, v1, i);
				}
			} else {
				n1-=o1;
				n2-=o2;
				loop(o1, o2, i);
			}
		}
	}

	int c1 = 0, c2=0;
	for(int i=0;i<(2*n);++i){
		if(c[i]==1)
			++c1;
		else if(c[i]==2)
			++c2;
	}

	int ans = n1*n2;
	printf("%d\n", ans);
	for(int i=0;i<(2*n);++i){
		if(c[i]==0){
			if(c1<n){
				c[i] = 1;
				++c1;
			} else {
				c[i] = 2;
				++c2;
			}
		}
	}

	assert(c1==n), assert(c2==n);

	for(int i=0;i<(2*n);++i){
		printf("%d ", c[i]);
	}
	printf("\n");

	return 0;
}