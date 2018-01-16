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

int r, c;
char a[55][55];
int visit[55][55];
vector< pair<int, int> > v;

void dfs(int row, int col){
	visit[row][col] = 1;
	v.push_back(make_pair(row, col));

	if(row<r-1){
		if(visit[row+1][col]==0 && a[row+1][col]=='B')
			dfs(row+1, col);
	}
	if(row>0){
		if(visit[row-1][col]==0 && a[row-1][col]=='B')
			dfs(row-1, col);
	}
	if(col<c-1){
		if(visit[row][col+1]==0 && a[row][col+1]=='B')
			dfs(row, col+1);
	}
	if(col>0){
		if(visit[row][col-1]==0 && a[row][col-1]=='B')
			dfs(row, col-1);
	}
}

int main() {
	s(r), s(c);
	for(int i=0;i<r;++i){
		ss(a[i]);
	}
	int row = -1, col = -1;
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			if(a[i][j]=='B'){
				row = i, col = j;
				break;
			}
		}
		if(row!=-1)
			break;
	}
	dfs(row, col);
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			if(a[i][j]=='B' && visit[i][j]==0){
				printf("NO\n");
				return 0;
			}
		}
	}
	bool ans = true;
	for(int i=0;i<r;++i){
		int val = 0;
		for(int j=0;j<c;++j){
			if(a[i][j]=='B'){
				if(val==0)
					val = 1;
				else if(val==2)
					ans = false;
			} else {
				if(val==1){
					val = 2;
				}
			}
		}
	}
	for(int j=0;j<c;++j){
		int val = 0;
		for(int i=0;i<r;++i){
			if(a[i][j]=='B'){
				if(val==0)
					val = 1;
				else if(val==2)
					ans = false;
			} else {
				if(val==1){
					val = 2;
				}
			}
		}
	}
	int s = v.size();
	for(int i=0;i<s;++i){
		for(int j=0;j<s;++j){
			int x_1 = v[i].first;
			int y_1 = v[i].second;
			int x_2 = v[j].first;
			int y_2 = v[j].second;
			
			if(a[x_1][y_2]=='W' && a[x_2][y_1]=='W')
				ans = false;
		}
	}

	if(ans)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}