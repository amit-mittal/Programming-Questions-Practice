#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

vector < pair<int, pair<int, int> > > v;
vector < pair<int, pair<int, int> > > v1;

int main() {
	int n, p, k, alice, bob;
	scanf("%d %d %d", &n, &p, &k);
	
	for(int i=1;i<=n;++i){
		scanf("%d %d", &bob, &alice);
		v.push_back(make_pair(bob, make_pair(alice, i)));
		v1.push_back(make_pair(alice, make_pair(bob, i)));
	}
	sort(v1.begin(), v1.end());
	
	int c=0;
	int a[100005];
	int b[100005]={0};
	for(int i=0;i<p-k;++i){
		a[i] = v1[i].second.second;
		b[a[i]] = -1;
	}
	c = p-k;
	sort(v.begin(), v.end());
	for(int i=n-1;i>=0;--i){
		if(b[v[i].second.second]!=-1){
			a[c] = v[i].second.second;
			v[i].second.second = -1;
			++c;
		}
		if(c==p)
			break;
	}
	

	sort(a, a+c);
	for(int i=0;i<c;++i){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}