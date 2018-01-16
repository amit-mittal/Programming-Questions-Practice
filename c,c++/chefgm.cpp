#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

#define ll long long

ll pow_2[50];

int main()
{
	int test, k, n, val;
	
	//calc power of 2
	pow_2[0] = 1LL;
	for(int i=1;i<=47;++i){
		pow_2[i] = pow_2[i-1]*2LL;
	}
	//calc power of 2..done
	
	scanf("%d", &test);
	while(test--){
		//input start
		int a[50] = {0};
		vector< vector<int> > v;
		scanf("%d", &k);
		v.resize(k);

		for(int i=0;i<k;++i){
			scanf("%d", &n);
			for(int j=0;j<n;++j){
				scanf("%d", &val);
				v[i].push_back(val);
			}
		}
		//input ends

		//processing the values
		for(int i=0;i<k;++i){
			sort(v[i].begin(), v[i].end());
			n = v[i].size();
			
			int j = 0;
			if(v[i][j]&1){
				while(j<n && v[i][j]&1){
					--a[0];
					++j;
				}
			} else {
				while(j<n && !(v[i][j]&1)){
					++a[0];
					++j;
				}
			}
			
			int factor = 1;
			for(;j<n;++j){
				if(v[i][j]&1){
					--a[factor];
				} else {
					++a[factor];
				}
				++factor;
			}
		}
		//processing the values...ends
/*
		for(int i=0;i<=46;++i){
			cout<<i<<" "<<a[i]<<endl;
		}
*/
		//processing table populated
		ll ans = 0LL;
		for(int i=0;i<=46;++i){
			int p = 47 - i;
			ans = ans + (ll)(pow_2[p]*a[i]);
		}
		//processing table populated..done
		if(ans>0)
			printf("EVEN\n");
		else if(ans<0)
			printf("ODD\n");
		else
			printf("DON'T PLAY\n");
	}

	return 0;
}

