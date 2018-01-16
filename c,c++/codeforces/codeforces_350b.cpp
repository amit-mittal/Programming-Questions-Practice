#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define s(n) scanf("%d", &n)

int main(){
	int n;
	int a[100005], b[100005];
	s(n);
	
	vector<int> g;
	g.resize(n);
	
	for(int i=0;i<n;++i){
		s(a[i]);
	}
	for(int i=0;i<n;++i){
		s(b[i]);
		b[i]--;
		if(b[i]!=-1)
			g[b[i]]++;
	}

	vector<int> v;
	vector<int> temp;
	v.clear();temp.clear();
	for(int i=0;i<n;++i){
		if(a[i]==1){
			int j = i;
			temp.clear();
			do{
				if(g[j]<=1){
					temp.push_back(j);
					j = b[j];
				} else
					break;
			}while(j!=-1);

			if(temp.size()>v.size()){
				v.clear();
				v.insert(v.begin(), temp.begin(), temp.end());
			}
		}
	}

	int size = v.size();
	printf("%d\n", size);
	for(int i=size-1;i>=0;--i){
		printf("%d\n", v[i]+1);
	}
	
	return 0;
}