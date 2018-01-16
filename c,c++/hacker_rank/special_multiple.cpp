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
#define se second
#define fi first

string dp[501];

string bfs(int n){
	int visit[505]={0};
	int rem = 9%n;
	queue<pair<string, int> > q;
	q.push(make_pair("9", rem));
	visit[rem] = 1;
	if(rem==0)
		return "9";
	while(!q.empty()){
		//cout << "init:" << q.size() << endl;
		pair<string, int> p = q.front();
		q.pop();
		rem = p.se;
		string a = p.fi;
		//cout << rem << " " << a << endl;
		int r1 = (rem*10)%n;
		if(visit[r1]==0){
			if(r1==0)
				return a+"0";
			q.push(make_pair(a+"0", r1));
			visit[r1] = 1;
		}
		
		int r2 = ((rem*10) + 9)%n;
		if(visit[r2]==0){
			if(r2==0)
				return a+"9";
			q.push(make_pair(a+"9", r2));
			visit[r2] = 1;
		}
		//cout << "final:" << q.size() << endl;
	}
	//return "null";
}

int main(){
	for(int i=1;i<=500;++i)
		dp[i] = bfs(i);
	int test;
	s(test);
	while(test--){
		int n;
		s(n);
		cout << dp[n] << endl;
	}
}