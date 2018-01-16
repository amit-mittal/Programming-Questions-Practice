#include <iostream>
#include <set>
#include <vector>
#include <cstdio>

using namespace std;
 
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
 
const int MAX = 10005;
const int MAXINT = 1000000000;
 
int n;
 
void Dijkstra(int s, vvii &G, vi &D)
{
	set<ii> Q;
	D[s] = 0;
	Q.insert(ii(0,s));
 
	while(!Q.empty())
	{
		ii top = *Q.begin();
		Q.erase(Q.begin());
		int v = top.second;
		int d = top.first;
 
		for (vii::const_iterator it = G[v].begin(); it != G[v].end(); it++)
		{
			int v2 = it->first;
			int cost = it->second;
			if (D[v2] > D[v] + cost)
			{
				if (D[v2] != 1000000000)
				{
					Q.erase(Q.find(ii(D[v2], v2)));
				}
				D[v2] = D[v] + cost;
				Q.insert(ii(D[v2], v2));
			}
		}
	}
}
 
int main()
{
	int test;
	scanf("%d", &test);
	while(test--){
		vvii G(MAX);
		vi D(MAX, MAXINT);

		int N, A, B, c1, c2, h1;

		scanf("%d %d %d", &N, &A, &B);
		for(int i=0;i<N;++i){
			scanf("%d %d %d", &c1, &h1, &c2);
			G[c1 - 1].push_back(ii(c2 - 1, h1));
			G[c2 - 1].push_back(ii(c1 - 1, h1));
		}
		
		Dijkstra(A - 1, G, D);
 		
 		if(D[B-1]!=1000000000)
			printf("%d\n", D[B - 1]);
		else
			printf("-1\n");
	}

	return 0;
}