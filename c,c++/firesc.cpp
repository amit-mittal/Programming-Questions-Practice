#include <iostream>
#include <cstdio>
#include <vector>

#define s(n) scanf("%d",&n)
#define MOD 1000000007

using namespace std;

int visit[100005];
long long int flag;
vector< vector<int> > v;

void traverse(int start){	
	++flag;
	visit[start]=1;
	for(int i=0;i<v[start].size();++i){
		if(visit[v[start][i]]==0)
			traverse(v[start][i]);
	}
}

int main(){
	int test, x, y, n, m, i, val;

	s(test);

	while(test--){
		v.clear();
		s(n);s(m);

		for(i=0;i<=n;++i)
			visit[i]=0;

		v.resize(n+1);
		while(m--){
			s(x);s(y);
			v[x].push_back(y);
			v[y].push_back(x);
		}

		int count=0;
		long long int ans=1;
		for(i=1;i<=n;++i){
			if(visit[i]==0){
				flag=0;
				++count;
				traverse(i);
				ans=(long long int)ans*flag;
				if(ans>MOD)
					ans=ans%MOD;
			}
		}
		printf("%d %lld\n", count, ans);
	}

	return 0;
}