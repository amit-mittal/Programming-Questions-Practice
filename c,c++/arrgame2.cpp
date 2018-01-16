#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
	int test, n, a[100005], b[100005];
	double c[100005], d[100005];
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		for(int i=0;i<n;++i){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;++i){
			scanf("%d", &b[i]);
		}
		
		int count = 0;
		for(int i=0;i<n;++i){
			if(a[i]!=1){
				c[i] = (double)a[i]/log(a[i]);
			} else
				c[i] = -1;
			if(b[i]!=1){
				d[i] = (double)b[i]/log(b[i]);
			} else {
				++count;
				d[i] = -1;
			}
		}
		
		sort(c, c+n), sort(d, d+n);
		
		ll int ans = 0LL;
		for(int i=0;i<n;++i){
			if(c[i]!=-1){
				double *v = upper_bound(d, d+n, c[i]);
				int val = v - d;
				val = n - val + count;
				ans = ans + (ll int)val;
			}
		}
		
		double q = (double)ans/n;
		printf("%lf\n", q);
	}
	return 0;
}