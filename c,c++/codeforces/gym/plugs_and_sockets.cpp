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
#include <utility>
#include <algorithm>

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

vector< pair< int, pair<int, int> > > v;
vector< pair<int, int> > p;

int main() {
	int n, a, b, t, w;

	s(n), s(a), s(b);
	for(int i=1;i<=n;++i){
		s(t), s(w);
		v.push_back( make_pair(w, make_pair(t, i)) );
	}
	sort(v.begin(), v.end());

	int c1=a, c2=b;
	int s1=0, s2=0, s3=0;
	int total = 0;
	for(int i=0;i<n;++i){
		int type = v[i].second.first;
		if(type==1 && c1>0){
			total+=v[i].first;
			p.push_back(make_pair(type, v[i].second.second));
			++s1;
			--c1;
		} else if(type==2 && c2>0){
			p.push_back(make_pair(type, v[i].second.second));
			total+=v[i].first;
			++s2;
			--c2;
		} else if(type==3){
			total+=v[i].first;
			p.push_back(make_pair(type, v[i].second.second));
			++s3;
		}
		if(s1+s2+s3==a+b)
			break;
	}

	c1=0;
	c2=0;
	int s = s1+s2+s3;
	printf("%d %d\n", s, total);
	for(int i=0;i<s1+s2+s3;++i){
		if(p[i].first==1){
			printf("%d %d\n", p[i].second, c1+1);
			++c1;
		}
	}

	if(c1<a){
		for(int i=0;i<s1+s2+s3;++i){
			if(p[i].first==3){
				printf("%d %d\n", p[i].second, c1+1);
				++c1;
				p[i].first=-1;
			}
			if(c1==a)
				break;
		}
	}
	
	for(int i=0;i<s1+s2+s3;++i){
		if(p[i].first==2){
			printf("%d %d\n", p[i].second, a+c2+1);
			++c2;
		}
	}

	if(c2<b){
		for(int i=0;i<s1+s2+s3;++i){
			if(p[i].first==3){
				printf("%d %d\n", p[i].second, a+c2+1);
				++c2;
				p[i].first=-1;
			}
			if(c2==b)
				break;
		}
	}

	return 0;
}
