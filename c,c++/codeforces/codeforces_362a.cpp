#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)

void fill(int a[][10], int i, int j, int move){
	if(i>=8 || j>=8 || i<0 || j<0)
		return;
		
	if(a[i][j]>=0)
		return;
	
	a[i][j] = move;
	fill(a, i+2, j+2, move+1);
	fill(a, i+2, j-2, move+1);
	fill(a, i-2, j+2, move+1);
	fill(a, i-2, j-2, move+1);
}

int main() {
	char a[15][15];
	int b[10][10], c[10][10];
	vector< pair<int, int> > v;
	char temp[10];
	int test;
	
	s(test);
	while(test--){
		v.clear();
		
		for(int i=0;i<8;++i){
			scanf("%s", a[i]);
		}
		scanf("%s", temp);
		
		for(int i=0;i<8;++i){
			for(int j=0;j<8;++j){
				if(a[i][j]=='K'){
					v.push_back(make_pair(i, j));
				}
			}
		}
		
		for(int i=0;i<8;++i){
			for(int j=0;j<8;++j){
				b[i][j] = c[i][j] = -1;
			}
		}
		
		fill(b, v[0].first, v[0].second, 0);
		fill(c, v[1].first, v[1].second, 0);
	
		bool ans = false;
		for(int i=0;i<8;++i){
			for(int j=0;j<8;++j){
				if(b[i][j]==-1 || c[i][j]==-1 || a[i][j]=='#')
					continue;
					
//				if((b[i][j]+c[i][j])%2==0){
					ans = true;
//				}
			}
		}
		
		if(ans)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}