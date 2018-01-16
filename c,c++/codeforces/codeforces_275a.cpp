#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

#define mod 1000000007
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define ll long long

int main() {
	int a[3][3];
	int b[3][3];
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			s(a[i][j]);
			b[i][j]=1;
		}
	}
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			if(a[i][j]&1){
				b[i][j]^=1;
				if(i-1>=0)
					b[i-1][j]^=1;
				if(i+1<3)
					b[i+1][j]^=1;
				if(j-1>=0)
					b[i][j-1]^=1;
				if(j+1<3)
					b[i][j+1]^=1;
			}
		}
	}

	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			printf("%d", b[i][j]);
		}
		printf("\n");
	}

	return 0;
}