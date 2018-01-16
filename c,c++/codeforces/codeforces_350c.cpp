#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

#define s(n) scanf("%d", &n)

int main(){
	int n, x, y;
	s(n);
	vector< pair<int, int> > v1;
	vector< pair<int, int> > v2;
	vector< pair<int, int> > v3;
	vector< pair<int, int> > v4;
	for(int i=0;i<n;++i){
		s(x), s(y);
		if(x>=0 && y>=0)
			v1.push_back(make_pair(x, y));
		else if(x>=0 && y<0)
			v2.push_back(make_pair(x, y));
		else if(x<0 && y>=0)
			v3.push_back(make_pair(x, y));
		else if(x<0 && y<0)
			v4.push_back(make_pair(x, y));
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	sort(v3.begin(), v3.end());
	sort(v4.begin(), v4.end());

	vector< pair<int, pair<int, char> > > a;
	for(int i=0;i<v1.size();++i){
		if(v1[i].first>0 && v1[i].second>0){
			a.push_back(make_pair(1, make_pair(v1[i].first, 'R')));
			a.push_back(make_pair(1, make_pair(v1[i].second, 'U')));
			a.push_back(make_pair(2, make_pair(v1[i].second, 'U')));
			a.push_back(make_pair(1, make_pair(v1[i].first, 'L')));
			a.push_back(make_pair(1, make_pair(v1[i].second, 'D')));
			a.push_back(make_pair(3, make_pair(v1[i].second, 'U')));
		} else if(v1[i].first==0 && v1[i].second>0){
			a.push_back(make_pair(1, make_pair(v1[i].second, 'U')));
			a.push_back(make_pair(2, make_pair(v1[i].second, 'U')));
			a.push_back(make_pair(1, make_pair(v1[i].second, 'D')));
			a.push_back(make_pair(3, make_pair(v1[i].second, 'U')));
		} else if(v1[i].first>0 && v1[i].second==0){
			a.push_back(make_pair(1, make_pair(v1[i].first, 'R')));
			a.push_back(make_pair(2, make_pair(v1[i].second, 'U')));
			a.push_back(make_pair(1, make_pair(v1[i].first, 'L')));
			a.push_back(make_pair(3, make_pair(v1[i].second, 'U')));
		}
	}

	for(int i=v2.size()-1;i>=0;--i){
		if(v2[i].first>0 && v2[i].second<0){
			a.push_back(make_pair(1, make_pair(v2[i].first, 'R')));
			a.push_back(make_pair(1, make_pair(-v2[i].second, 'D')));
			a.push_back(make_pair(2, make_pair(v2[i].second, 'U')));
			a.push_back(make_pair(1, make_pair(v2[i].first, 'L')));
			a.push_back(make_pair(1, make_pair(-v2[i].second, 'U')));
			a.push_back(make_pair(3, make_pair(v2[i].second, 'U')));
		} else if(v2[i].first==0 && v2[i].second<0){
			a.push_back(make_pair(1, make_pair(-v2[i].second, 'D')));
			a.push_back(make_pair(2, make_pair(v1[i].second, 'U')));
			a.push_back(make_pair(1, make_pair(-v2[i].second, 'U')));
			a.push_back(make_pair(3, make_pair(v1[i].second, 'U')));
		}
	}

	for(int i=0;i<v3.size();++i){
		if(v3[i].first<0 && v3[i].second>0){
			a.push_back(make_pair(1, make_pair(-v3[i].first, 'L')));
			a.push_back(make_pair(1, make_pair(v3[i].second, 'U')));
			a.push_back(make_pair(2, make_pair(v3[i].second, 'U')));
			a.push_back(make_pair(1, make_pair(-v3[i].first, 'R')));
			a.push_back(make_pair(1, make_pair(v3[i].second, 'D')));
			a.push_back(make_pair(3, make_pair(v3[i].second, 'U')));
		} else if(v3[i].first<0 && v3[i].second==0){
			a.push_back(make_pair(1, make_pair(-v3[i].first, 'L')));
			a.push_back(make_pair(2, make_pair(v3[i].second, 'U')));
			a.push_back(make_pair(1, make_pair(-v3[i].first, 'R')));
			a.push_back(make_pair(3, make_pair(v3[i].second, 'U')));
		}
	}

	for(int i=v4.size()-1;i>=0;--i){
		if(v4[i].first<0 && v4[i].second<0){
			a.push_back(make_pair(1, make_pair(-v4[i].first, 'L')));
			a.push_back(make_pair(1, make_pair(-v4[i].second, 'D')));
			a.push_back(make_pair(2, make_pair(v4[i].second, 'U')));
			a.push_back(make_pair(1, make_pair(-v4[i].first, 'R')));
			a.push_back(make_pair(1, make_pair(-v4[i].second, 'U')));
			a.push_back(make_pair(3, make_pair(v4[i].second, 'U')));
		}
	}

	int s = a.size();
	printf("%d\n", s);
	for(int i=0;i<s;++i){
		if(a[i].first==1){
			printf("%d %d %c\n", a[i].first, a[i].second.first, a[i].second.second);
		} else if(a[i].first==2){
			printf("2\n");
		} else {
			printf("3\n");
		}
	}
	
	return 0;
}