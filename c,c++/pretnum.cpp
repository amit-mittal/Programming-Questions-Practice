#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

#define ll long long
#define lim 1000000

int prime[1000006];
vector<int> v;

void pre(){
	for(int i=2;(i*i)<=lim;++i){
		if(prime[i]==0){
			int j = i*i;
			while(j<=lim){
				prime[j] = 1;
				j+=i;
			}
		}
	}
	for(int i=2;i<=lim;++i){
		if(prime[i]==0)
			v.push_back(i);
	}
}

int main() {
	int test;
	ll l, r;
	int a[1000006];
	int b[1000006];
	
	scanf("%d", &test);
	
	pre();
	int s = v.size();
	
	while(test--){
		scanf("%lld %lld", &l ,&r);
		
		if(l==1)
			++l;
		
		for(int i=0;i<=(r-l);++i)
			a[i] = 0;
		
		for(int i=0;i<s;++i){
			ll q = (l-1)/v[i];
			ll more=(ll)(q+1)*v[i];
			if(v[i]==more)
				more=(ll)(more+v[i]);
			while(more<=r){
				b[more-l]=v[i];
				a[more-l]+=1;
				more=(ll)(more+v[i]);
			}
		}
		
		int count = 0;
		for(int i=0;i<=(r-l);++i){
			if(a[i]>1)
				continue;
			if(a[i]==0){
				++count;
				continue;
			}
			if(a[i]==1){
				int c = 0;
				ll val = l+i;
				while((val%b[i])==0){
					val=(ll)(val/b[i]);
					++c;
				}
				if(val>1)
					continue;
				if(prime[c+1]==0)
					++count;
			}
		}
		
		printf("%d\n", count);
	}
	return 0;
}
