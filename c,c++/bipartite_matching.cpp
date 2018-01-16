#include <cstdio>
#include <vector>

using namespace std;
const int maxl=111;
char k1[maxl],k2[maxl],p[maxl];

// This code performs maximum bipartite matching.
//
// Running time: O(|E| |V|) -- often much faster in practice
//
//   INPUT: w[i][j] = edge between row node i and column node j
//   OUTPUT: mr[i] = assignment for row node i, -1 if unassigned
//           mc[j] = assignment for column node j, -1 if unassigned
//           function returns number of matches made

typedef vector<int> VI;
typedef vector<VI> VVI;

bool FindMatch(int i, const VVI &w, VI &mr, VI &mc, VI &seen) {
  for (int j = 0; j < w[i].size(); j++) {
    if (w[i][j] && !seen[j]) {
      seen[j] = true;
      if (mc[j] < 0 || FindMatch(mc[j], w, mr, mc, seen)) {
        mr[i] = j;
        mc[j] = i;
        return true;
      }
    }
  }
  return false;
}

int BipartiteMatching(const VVI &w, VI &mr, VI &mc) {
  mr = VI(w.size(), -1);
  mc = VI(w[0].size(), -1);
  
  int ct = 0;
  for (int i = 0; i < w.size(); i++) {
    VI seen(w[0].size());
    if (FindMatch(i, w, mr, mc, seen)) ct++;
  }
  return ct;
}

bool possible(int m){
	int l=strlen(k1)/m;
	VVI w(m);
	VI mr(m,-1),mc(m,-1);
	for(int i=0;i<m;i++){
		w[i]=vector<int>(m,0);
		for(int j=0;j<m;j++){
			w[i][j]=1;
			for(int k=0;k<l;k++)
				if(k1[i*l+k]!=k2[j*l+k] && k1[i*l+k]!='?' && k2[j*l+k]!='?')
					w[i][j]=0;
		}
	}
	return (BipartiteMatching(w, mr, mc)==m);
}
main(){
	int T,m;
	scanf("%d",&T);
	for(int t=1;t<=T;t++){
		scanf("%d%s%s",&m,k1,k2);
		printf("Case #%d: ",t);
		if(possible(m)==0){
			printf("IMPOSSIBLE\n");
			continue;
		}
		for(int i=0;k1[i];i++){
			if (k1[i]!='?')continue;
			//printf("Filling %d th position\n",i);
			for(int j=0;j<6;j++){
				k1[i]='a'+j;
				if(possible(m)){
					break;
				}
			}
		}
		printf("%s\n",k1);
	}
}