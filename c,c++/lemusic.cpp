#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

#define ll long long

using namespace std;

int main(){
	ll int test,n,b,l,ans;
	map<ll int, ll int> m;
	vector<ll int> v;
	vector<ll int> a;

	scanf("%lld",&test);

	while(test--){
		m.clear();
		v.clear();
		a.clear();
		ans = 0;

		scanf("%lld",&n);
		for(ll int i=0;i<n;++i){
			scanf("%lld %lld", &b, &l);
			
			if(m[b]==0)
				m[b]=l;
			else if(l<m[b]){
				a.push_back(m[b]);
				m[b]=l;
			}
			else{
				a.push_back(l);
			}
		}
		ll int count = m.size();

		map<ll int,ll int>::key_compare mycomp = m.key_comp();
		ll int highest = m.rbegin()->first; 
		map<ll int,ll int>::iterator it = m.begin();
		
		do {
			v.push_back(it->second);
		} while ( mycomp((*it++).first, highest) );

		sort(v.begin(), v.end());

		for(ll int i=0;i<v.size();++i){
			ans+=((i+1)*v[i]);
		}

		ll int temp = 0;
		for(ll int i=0;i<a.size();++i){
			temp+=a[i];
		}
		ans+=(temp*count);

		printf("%lld\n", ans);
	}

	return 0;
}