#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long

int main(){
	int test, n, w;

	cin>>test;
	while(test--){
		int a[105][3];
		int b[105][105]={0};
		
		cin>>n>>w;
		
		for(int i=0;i<n;++i){
			cin>>a[i][0]>>a[i][1]>>a[i][2];
		}
		
		for(int j=0;j<=w;++j){
			if(a[0][2]<=j)
				b[0][j] = (a[0][0]*a[0][1]);
		}
		
		for(int i=1;i<n;++i){
			for(int j=0;j<=w;++j){
				b[i][j] = b[i-1][j];
				if(a[i][2]<=j){
					b[i][j] = max(b[i][j], (a[i][0]*a[i][1]) + b[i-1][j-a[i][2]]);
				}
			}
		}
/*
		for(int i=0;i<n;++i){
			for(int j=0;j<=w;++j){
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}
*/
		cout<<b[n-1][w]<<endl;
	}
	return 0;
}