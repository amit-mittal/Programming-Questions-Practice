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

#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define ll long long

vector< vector<int> > v;
int b[100004] = {0};

void bfs(int *visit, int e){
	queue<int> q;
	q.push(e);
	
	visit[e] = 1;
	while(!q.empty()){
		bool c1 = false, c2=false, c3=false;
		
		int ver = q.front();
		q.pop();
		
		int s = v[ver].size();
		
		for(int i=0;i<s;++i){

			if(visit[v[ver][i]]==0 && b[v[ver][i]]==0){
				q.push(v[ver][i]);
				visit[v[ver][i]] = 1;
			} else {
				if(b[v[ver][i]]==1)
					c1 = true;
				else if(b[v[ver][i]]==2)
					c2 = true;
				else if(b[v[ver][i]]==3)
					c3 = true;
			}
		}
		if(!c1)
			b[ver] = 1;
		else if(!c2)
			b[ver] = 2;
		else
			b[ver] = 3;
	}
}

int main() {
	int n, m;
	int a[100005][3];
	
	s(n), s(m);
	
	v.resize(n+1);
	for(int i=0;i<m;++i){
		s(a[i][0]), s(a[i][1]), s(a[i][2]);
		
		v[a[i][0]].push_back(a[i][1]);v[a[i][0]].push_back(a[i][2]);
		v[a[i][1]].push_back(a[i][0]);v[a[i][1]].push_back(a[i][2]);
		v[a[i][2]].push_back(a[i][0]);v[a[i][2]].push_back(a[i][1]);
	}

	int visit[100004] = {0};
	for(int i=1;i<=n;++i){
		if(b[i]==0)
			bfs(visit, i);
	}
	for(int i=1;i<=n;++i){
		printf("%d ", b[i]);
	}

	return 0;
}

/*
Check list:-
1. limits int or long long?
2. check answers on extreme cases.
3. all variables initialised?
4. is value of mod correct (if any)?
5. covered all special cases?
6. Division by 0 or int division for double?
7. 0 indexed or 1 indexed?
8. If multiple cases check re-initialisation of variables.
*/