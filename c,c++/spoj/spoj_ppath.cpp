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

#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define pll(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long
#define LIM 10000

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

int n;
vi primes;
vvi g;

bool valid(int a, int b){
	int diff = 4;
	int arr1[4], arr2[4];
	int c = 0;
	while(a>0){
		arr1[c] = a%10;
		a/=10;
		arr2[c++] = b%10;
		b/=10;
	}
	for(int i=0;i<4;++i){
		if(arr2[i] == arr1[i])
			--diff;
	}
	if(diff == 1)
		return true;
	return false;
}

void pre(){
	int p[LIM] = {0};
	for(int i=2;i*i<LIM;++i){
		int j = i*i;
		while(j<LIM){
			p[j] = 1;
			j += i;
		}
	}
	for(int j=1000;j<LIM;++j){
		if(p[j] == 0)
			primes.push_back(j);
	}
	
	n = primes.size();
	g.resize(n+1);
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(valid(primes[i], primes[j])){
				g[i].push_back(j);
				g[j].push_back(i);
			}
		}
	}
	
	/*for(int i=0;i<n;++i){
		cout << primes[i] << "->";
		for(int j=0;j<g[i].size();++j){
			cout << primes[g[i][j]] << " ";
		}
		cout << endl;
	}*/
}

int bfs(int s, int e){
	//cout << s << " " << e << endl;
	for(int i=0;i<n;++i){
		if(primes[i] == s)
			s = i;
		if(primes[i] == e)
			e = i;
	}
	//cout << s << " " << e << endl;
	
	int visit[1100] = {0};
	queue<pii> q;
	q.push(make_pair(s, 0));
	while(!q.empty()){
		pii p = q.front();
		q.pop();
		int v = p.first;
		int dist = p.second;
		if(visit[v])
			continue;
		visit[v] = 1;
		if(v == e)
			return dist;
		for(int i=0;i<g[v].size();++i){
			if(visit[g[v][i]] == 0){
				q.push(make_pair(g[v][i], dist+1));
			}
		}
	}
}

int main() {
	pre();
	int test;
	s(test);
	while(test--){
		int start, end;
		s(start), s(end);
		printf("%d\n", bfs(start, end));
	}
	return 0;
}
