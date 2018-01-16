#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <climits>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)

int main(){
	int test, l, n, x, y, c;
	vector< pair<int, pair<int, int> > > v;

	s(test);
	while(test--){
		v.clear();
		s(l), s(n);
		for(int i=0;i<n;++i){
			s(x), s(y), s(c);
			v.push_back(make_pair(x, make_pair(y, c)));
		}
		sort(v.begin(), v.end());
		
		int size = v.size();
		int a[300];
		for(int i=0;i<=l;++i){
			a[i] = 10000000;
		}
/*
		for(int j=0;j<size;++j){
			printf("%d %d %d\n", v[j].first, v[j].second.first, v[j].second.second);
		}
*/
		for(int i=1;i<=l;++i){
			for(int j=0;j<size;++j){
				if(i==v[j].second.first){
					int mini = 10000000;
					for(int k=v[j].first;k<i;++k){
						if(k==0){
							mini = 0;
							break;
						}
						mini = min(mini, a[k]);
					}
					if(mini!=10000000)
						a[i] = min(a[i], v[j].second.second+mini);
				}
			}
		}
/*
		for(int i=0;i<=l;++i){
			printf("%d ", a[i]);
		}
*/
		if(a[l]==10000000)
			printf("-1\n");
		else
			printf("%d\n", a[l]);
	}
	return 0;
}