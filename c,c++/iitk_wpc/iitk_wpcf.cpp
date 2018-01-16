#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

#define MAX_LIM 1000005

int main(){
	int test;
	long long int n;
	int a[MAX_LIM+5] = {0};
	
	for(i=2;i*i<MAX_LIM;++i){
		if(a[i] == 0){
			val = i*i;
			while(val<MAX_LIM){
				a[val]=1;
				val+=i;
			}
		}
	}

	scanf("%d",&test);
	while(test--){
		bool found = false;
		int size = 0;
		vector<long long int> v;
		long long int val;

		scanf("%lld",&n);
		if(n&1){
			size = 0;
		} else {
			val = n/2;
			
			long long int i;
			for(i=1;i*i<val;++i){
				if(val%i == 0)
					v.push_back(i);
			}

			size = 2*(v.size());
			
			if(i*i == val){
				found = true;
				v.push_back(i);
				++size;
			}
		}

		printf("%d ", size);
		for(int i=0;i<v.size();++i){
			printf("%lld ", v[i]);
		}
		int start;
		if(found)
			start = v.size()-2;
		else
			start = v.size()-1;
		for(int i=start;i>=0;--i){
			long long int g = val/v[i];
			printf("%lld ", g);
		}

		printf("\n");
	}
	return 0;
}
