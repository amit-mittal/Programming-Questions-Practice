#include <iostream>
#include <cstdio>

using namespace std;

#define NUM 2147483647

int calc(int **a, int m, int n){
	int i = 0;
	int j = 0;
	a[i][j] = NUM;
	int count = 0;
	while(i<m && j<n){
		if(a[i][j]==NUM){
			if(j+1<n && i+1<m){
				if(a[i][j+1]!=NUM && a[i][j+1]<a[i+1][j]){
					a[i][j] = a[i][j+1];
					a[i][j+1] = NUM;
					++j;	
				} else if(a[i+1][j]!=NUM && a[i][j+1]>a[i+1][j]){
					a[i][j] = a[i+1][j];
					a[i+1][j] = NUM;
					++i;
				} else
					break;
			} else if(j+1<n){
				if(a[i][j+1]!=NUM){
					a[i][j] = a[i][j+1];
					a[i][j+1] = NUM;
					++j;
				} else
					break;
			} else if(i+1<m){
				if(a[i+1][j]!=NUM){
					a[i+1][j] = a[i+1][j];
					a[i+1][j] = NUM;
					++i;
				} else
					break;
			} else {
				break;
			}
			++count;
		} else {
			break;
		}
	}
	return count;
}

int main(){
	int test, m, n;
	scanf("%d", &test);
	while(test--){
		int **a;
		scanf("%d %d", &m, &n);
		a = new int*[m];
		for(int i=0;i<m;++i){
			a[i] = new int[n];
		}
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j)
				scanf("%d", &a[i][j]);
		}
		
		printf("%d\n", calc(a, m, n));
	}
	return 0;
}