#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#include <utility>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sf(n) scanf("%lf", &n)

int main(){
	int n;
	double a;
	ll int b;
	vector< pair<ll int, ll int> > v;

	s(n);
	for(int i=0;i<(2*n); ++i){
		sf(a);
		double x = a*1000;
		b = (int)x;

		ll int frac = b%1000;
		ll int num = b-frac;
		v.push_back(make_pair(frac, num));
	}
	sort(v.begin(), v.end());

	ll int end = v.size();
	ll int s = 0;
	while(s<end && v[s].first==0)
		++s;

	ll int ans = 0;
	int taken[100005] = {0};
	int pending = -1;
	for(int i=s;i<end;++i){
		if(taken[i]==1)
			continue;

		int in = i;
		for(int j=end-1;j>i;--j){
			if(taken[j]==0){
				in = j;
				break;
			}
		}

		if(in==i){//only 1 left
			pending = i;
			break;
		}

		ll int prev = (v[i].first + v[i].second + v[in].first + v[in].second) - (v[i].second + v[in].second + 1000);
		if(prev<0)
			prev=((-1)*prev);

		for(int j=end-1;j>i;--j){
			if(taken[j]==1)
				continue;

			ll int val = (v[i].first + v[i].second + v[j].first + v[j].second) - (v[i].second + v[j].second + 1000);
			if(val<0)
				val=((-1)*val);
			if(val<prev){
				in = j;
				prev = val;
			}
		}

		taken[i] = 1;
		taken[in] = 1;
		ans+=prev;
	}

	if(pending!=-1){
		int val = v[pending].first;
		if(val<=500)
			ans+=val;
		else
			ans+=(1000-val);
	}

	double final = (double)ans/1000;
	printf("%.3lf\n", final);

	return 0;
}