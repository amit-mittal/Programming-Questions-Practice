#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
using namespace std;

#define f first
#define s second
typedef pair<int, int> P;
typedef pair<int, pair<int, int> > PP;

int row, col;
char a[183][183];

bool valid(int x, int y){
	if(x<0 || y<0 || x>=col || y>=row)
		return false;
	return true;
}

void func(int visit[][183]){
	int dist;
	queue< pair<int, pair<int, int> > > q;
	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			visit[i][j] = 4000000;
		}
	}
	for(int i=0;i<row;++i)
		for(int j=0;j<col;++j)
			if(a[i][j]=='1'){
				q.push(make_pair(0, make_pair(j, i)));
				visit[i][j] = 0;
			}
	while(!q.empty()){
		PP p = q.front();
		q.pop();
		int y = p.s.s;
		int x = p.s.f;
		dist = p.f;
		for(int i=-1;i<=1;++i){
			for(int j=-1;j<=1;++j){
				if(i*j!=0 || (i==0 && j==0))
					continue;
				if(valid(x+i, y+j) && visit[y+j][x+i] > dist+1){
					q.push(make_pair(dist+1, make_pair(x+i, y+j)));
					visit[y+j][x+i] = dist + 1;
				}
			}
		}
	}
}

int main() {
	int test;
	scanf("%d", &test);
	while(test--){
		scanf("%d %d", &row, &col);
		for(int i=0;i<row;++i)
			scanf("%s", a[i]);
		int visit[183][183];
		
		func(visit);
		for(int i=0;i<row;++i){
			for(int j=0;j<col;++j)
				printf("%d ", visit[i][j]);
			printf("\n");
		}
	}
	
	return 0;
}