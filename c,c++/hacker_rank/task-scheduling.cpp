#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main(){
	int t;
	vector< pair<int, int> > v;
	
	scanf("%d",&t);
	
	for(int z=0;z<t;++z){
		int x, y;
		scanf("%d %d",&x, &y);
		v.push_back(make_pair(x, y));
		
		sort(v.begin(), v.end());

		int till = 0;
		int ans = 0;
		for(int i=0;i<=z;++i){
			till+=v[i].second;
			if(till-v[i].first>ans){
				ans = till-v[i].first;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
