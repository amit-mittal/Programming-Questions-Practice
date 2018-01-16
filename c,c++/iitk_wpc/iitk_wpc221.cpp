#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

#define ll long long
#define mod(n) ((n>0)?n:-n)
#define s(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)

int main(){
	int test;
	char a[1005], b[1005];
	s(test);

	while(test--){
		int v[10][10] = {0};
		ss(a), ss(b);
		int len = strlen(a);
		for(int i=0;i<len;++i){
			int v1 = a[i]-'0';
			int v2 = b[i]-'0';
			++v[v1][v2];
		}

		int ve[10][10];
		for(int i=1;i<10;++i){
			for(int j=1;j<10;++j){
				int change = 0;
				for(int k=1;k<10;++k){
					if(k<j){
						change+=((j-k)*(v[i][k]));
					} else if(k>j){
						change+=((k-j)*(v[i][k]));
					}
				}
				ve[i][j] = change;
			}
		}

		int temp[10];
		for(int i=1;i<=10;++i){
			temp[i] = i;
		}

		int m = 10000000;
		do{
			int change = 0;
			for(int i=1;i<10;++i){
				change+=(ve[i][temp[i]]);
			}

			if(change<m)
				m = change;
		}while(next_permutation(temp+1, temp+10));

		printf("%d\n", m);
	}
	return 0;
}