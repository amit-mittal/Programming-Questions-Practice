//WRONG PROGRAM

#include <iostream>
#include <cstdio>
#include <cmath>

#define ll long long
#define s(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)

using namespace std;

int n,m;

int check(int a[][105], int i, int j){
	int dir1 = 0;
	int dir2 = 0;

	if(i-1>=0){
		if(a[i-1][j]>a[i][j])
			++dir1;
	}

	if(i+1<n){
		if(a[i+1][j]>a[i][j])
			++dir1;
	}

	if(j-1>=0){
		if(a[i][j-1]>a[i][j])
			++dir2;
	}

	if(j+1<m){
		if(a[i][j+1]>a[i][j])
			++dir2;
	}

	if(dir1>0 && dir2>0)
		return 1;
	return 0;
}

int main(){
	int test, a[105][105], ans;

	s(test);
	
	for(int t=1;t<=test;++t){
		ans = 0;
		s(n),s(m);
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				s(a[i][j]);
			}
		}

		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				ans += check(a, i, j);
//				printf("%d %d %d\n", i, j, ans);
			}
		}
//		printf("\n");

		if(ans==0)
			printf("Case #%d: YES\n", t);
		else
			printf("Case #%d: NO\n", t);
	}
	return 0;
}
