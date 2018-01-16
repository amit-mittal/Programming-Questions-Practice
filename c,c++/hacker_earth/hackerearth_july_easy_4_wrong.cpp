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
#include <utility>

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
#define mod 1000000007
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second

int matrix[2001][2001];
int c[2001][2001];

int count(queue< pair<char, pair<int, int> > > q){
	int n = q.size();
	memset(matrix, 0, sizeof(matrix));
	memset(c, 0, sizeof(c));
	
	while(!q.empty()){
		pair< char, pair<int, int> > p = q.front();
		q.pop();
		
		int new_x, new_y;
		char dir = p.fi;
		
		if(dir == 'N'){
			new_x = p.se.fi;
			new_y = p.se.se + 1;
		} else if(dir == 'S'){
			new_x = p.se.fi;
			new_y = p.se.se - 1;
		} else if(dir == 'W'){
			new_x = p.se.fi - 1;
			new_y = p.se.se;
		} else if(dir == 'E'){
			new_x = p.se.fi + 1;
			new_y = p.se.se;
		}
		
		if(new_x >= 0 && new_y >= 0 && new_x <= 2000 && new_y <= 2000){
			if(matrix[new_x][new_y] == (matrix[p.se.fi][p.se.se] + 1)){
				c[new_x][new_y] += 1;
			} else {
				matrix[new_x][new_y] = matrix[p.se.fi][p.se.se] + 1;
				c[new_x][new_y] = 1;
				q.push( mp( dir, mp( new_x, new_y ) ) );
			}
		}
	}
	
	for(int i=0;i<=2000;++i)
		for(int j=0;j<=2000;++j)
			if(c[i][j] >= 2)
				n -= c[i][j];
	
	return n;
}

int main() {
	int test, n, x, y;
	
	s(test);
	while(test--){
		s(n);
		
		queue< pair<char, pair<int, int> > > q;
		
		for(int i=0;i<n;++i){
			char str[3];
			s(x), s(y);
			ss(str);
			
			q.push( mp( str[0], mp(x+1000, y+1000) ) );
		}
		
		printf("%d\n", count(q));
	}
	
	return 0;
}