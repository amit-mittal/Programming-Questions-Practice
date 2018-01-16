#include <iostream>
#include <set>
#include <vector>
#include <cstdio>
#include <cassert>

using namespace std;
 
#define ll long long

typedef vector<ll> vi;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
 
const ll int MAX = 100005;
const ll int MAXINT = 1000000000000;

ll int n;
 
void Dijkstra(ll int s, vvii &G, vi &D)
{
	set<ii> Q;
	D[s] = 0LL;
	Q.insert(ii(0,s));
 
	while(!Q.empty())
	{
		ii top = *Q.begin();
		Q.erase(Q.begin());
		ll int v = top.second;
		ll int d = top.first;
 
		for (vii::const_iterator it = G[v].begin(); it != G[v].end(); it++)
		{
			ll int v2 = it->first;
			ll int cost = it->second;
			if (D[v2] > D[v] + cost)
			{
				if (D[v2] != MAXINT)
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
	vvii G(MAX);
	vi D(MAX, MAXINT);

	ll int N, A, B, c1, c2, h1;

	scanf("%lld %lld %lld", &N, &A, &B);
	
	assert(N>=1 && N<=100000);
	assert(A>=1 && B>=1 && A<=100000 && B<=100000);
	assert(A!=B);

	for(ll int i=0;i<N;++i){
		scanf("%lld %lld %lld", &c1, &c2, &h1);
		
		assert(c1<=100000 && c1>=1);
		assert(c2<=100000 && c2>=1);
		assert(h1<=1000000 && h1>=1);
	
		G[c1 - 1].push_back(ii(c2 - 1, h1));
		G[c2 - 1].push_back(ii(c1 - 1, h1));
	}
	
	Dijkstra(A - 1, G, D);
	
	if(D[B-1]!=MAXINT)
		printf("%lld\n", D[B - 1]);
	else
		printf("-1\n");

	return 0;
}
