#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main(){
	int x, y;
	vector<int> v;
	vector<int> w;
	vector< pair<int, int> > a;
	for(int i=0;i<8;++i){
		scanf("%d %d",&x, &y);
		
		bool found = false;
		for(int j=0;j<v.size();++j){
			if(x==v[j]){
				found = true;
			}
		}
		if(!found){
			v.push_back(x);
		}

		found = false;
		for(int j=0;j<w.size();++j){
			if(y==w[j]){
				found = true;
			}
		}
		if(!found){
			w.push_back(y);
		}
		pair<int, int> p(x, y);
		a.push_back(p);
	}
	sort(v.begin(), v.end());
	sort(w.begin(), w.end());
	
	bool found = true;
	if(v.size()!=3 || v[0].second!=3 || v[1].second!=2 || v[2].second!=3)
		found = false;
	if(w.size()!=3 || w[0].second!=3 || w[1].second!=2 || w[2].second!=3)
		found = false;

	if(found){
		for(int i=0;i<3;++i){
			for(int j=0;j<3;++j){
				for(int k=0;k<;){

				}
			}
		}
	}

	if(found)
		printf("respectable\n");
	else
		printf("ugly\n");

	return 0;
}