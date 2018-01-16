#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

#define sll(n) scanf("%lld",&n)
#define s(n) scanf("%d",&n)
#define ll long long

using namespace std;

ll int n;
ll int p;

ll int exp(ll int x, ll int y){
	if(y==0)
		return 1;
	int val;
	while(y>1){
		if(y%2==1){
			val = x;
			x = (x*x);
			if(x>p)
				x%=p;
			x = (x*val);
		}
		else{
			x = (x*x);
		}
		if(x>p)
			x%=p;
		y=y/2;
	}
	return x;
}

int main(){
	vector <int> v;
	vector <int> v1;
	int test,i;
	ll int prod, rem, extra, ans;
	s(test);

	while(test--){
		v.clear();
		v1.clear();
		sll(n),sll(p);

		int t = n;
		while(t>1){
			rem = t%p;
			if(rem>1)
				v.push_back(rem);
			t/=p;
		}
		
		sort(v.begin(),v.end());
		
		int k=0;prod = 1;
		for(i=1;i<p;++i){
			prod*=i;
			prod%=p;
			
			if(i==v[k]){
				v1.push_back(prod);
				++k;
			}
		}

		t=n;
		ans = 1;
		while(t>=p){
			ans*=exp(prod,t/p);
			ans=ans%p;
			t/=p;
		}

		for(i=0;i<v1.size();++i){
			ans=ans*v1[i];
			ans%=p;
		}

		printf("%lld\n", ans);
	}

	return 0;
}