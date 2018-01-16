#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int compare (const void *pa,const void *pb ) {
    if ( *(int*)(pa) < *(int*)(pb) ) return -1;
  	if ( *(int*)(pa) > *(int*)(pb) ) return 1;
    return 0;
}

int main(){
	int n, w, a[100005][2], ans=0, b[100005];
	vector< vector<int> > v;
	vector< vector<int> > v1;

	scanf("%d %d",&n,&w);

	for(int i=0;i<n;++i){
		scanf("%d",&a[i][0]);
		a[i][1]=i;
	}

	qsort (a, n, sizeof(a[0]), &compare);

	for(int i=0;i<n;++i)
		b[i]=1;

	int end = n-1;
	int start = 0;
	for(int i=n-1;i>=0;--i){
		if(b[i]==1){
			vector<int> vec;
			vec.push_back(a[i][1]);

			int weight = a[i][0];
			b[i]=0;
			while(weight<=w && start<i){
				if(b[start]==1 && weight+a[start][0]<=w){
					vec.push_back(a[start][1]);
					weight+=a[start][0];
					b[start]=0;
				}
				++start;

				if(weight+a[start][0]>w)
					break;
			}
			v.push_back(vec);
		}
	}

	for(int i=0;i<n;++i)
		b[i]=1;

	for(int i=0;i<n;++i){
		if(b[i]==1){
			vector<int> vec;
			vec.push_back(a[i][1]);

			int weight = a[i][0];
			b[i]=0;
			int start = i+1;
			while(weight<=w && start<n){
				if(b[start]==1 && weight+a[start][0]<=w){
					vec.push_back(a[start][1]);
					weight+=a[start][0];
					b[start]=0;
					++start;
				}
				else
					break;
			}
			v1.push_back(vec);
		}
	}

	if(v.size()<=v1.size()){
		printf("%d\n", v.size());
		for(int i=0;i<v.size();++i){
			printf("%d ", v[i].size());
			for(int j=0;j<v[i].size();++j){
				printf("%d ", v[i][j]);
			}
			printf("\n");
		}
	} else{
		printf("%d\n", v1.size());
		for(int i=0;i<v1.size();++i){
			printf("%d ", v1[i].size());
			for(int j=0;j<v1[i].size();++j){
				printf("%d ", v1[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}