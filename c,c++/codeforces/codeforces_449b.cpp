#include <cstdio>
#include <queue>
#include <cstring>

#define REP(i,n) for(int i=0; i<(n); ++i)

typedef long long LL;

template<typename T> void maxi(T &a, T b){ if(a<b) a = b; }

struct Edge
{
  int b,x,t;
  bool operator<(const Edge &e) const { return x!=e.x ? x>e.x : t>e.t; }
};

enum { n_max = 110000 };

bool V[n_max];

std::vector<Edge> G[n_max];

int main()
{
  int n,m,k; scanf("%d%d%d",&n,&m,&k);
  REP(i,m)
  {
    int u,v,x; scanf("%d%d%d",&u,&v,&x); u--; v--;
    G[u].push_back(Edge{v,x,0});
    G[v].push_back(Edge{u,x,0});
  }

  std::priority_queue<Edge> Q;
  Q.push(Edge{0,0,0}); V[0] = 0;

  REP(i,k)
  {
    int s,y; scanf("%d%d",&s,&y); s--;
    Q.push(Edge{s,y,1});
  }

  while(Q.size())
  {
    Edge e = Q.top(); Q.pop();
    if(V[e.b]) continue;
    V[e.b] = 1; if(e.t) k--;
    for(auto e2 : G[e.b]) Q.push(Edge{e2.b,e.x+e2.x,0});
  }
  printf("%d\n",k);

  return 0;
}
