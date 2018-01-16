#include <iostream>
#include <cstdio>
#include <set>
#include <utility>
#include <queue>
#include <cstring>

using namespace std;

typedef pair<int, int> P;
typedef pair<int, P> PP;
#define f first
#define s second

int n, p, e;
int gr[1005][1005];

int prim(){
	int dist[1005];
	memset(dist, -1, sizeof(dist));
//	for(int i=1;i<=n;++i)
//		cout<<dist[i]<<endl;
	priority_queue<P, vector<P >, greater<P > > q;
	q.push(make_pair(0, 1));
	while(!q.empty()){
		P val = q.top();
		q.pop();
		if(dist[val.s]!=-1)
			continue;
		dist[val.s] = val.f;
		for(int i=1;i<=n;++i){
			if(gr[val.s][i]>0){
				q.push(make_pair(gr[val.s][i], i));
			}
		}
	}
	int sum = 0;
	for(int i=1;i<=n;++i)
		sum+=dist[i];
	return sum*p;
}

int main() {
	int test;
	scanf("%d", &test);
	while(test--){
		memset(gr, 0, sizeof(gr));
		scanf("%d %d %d", &p, &n, &e);
		for(int i=0;i<e;++i){
			int a, b, len;
			scanf("%d %d %d", &a, &b, &len);
			gr[a][b] = gr[b][a] = len;
		}
		printf("%d\n", prim());
	}
	return 0;
}