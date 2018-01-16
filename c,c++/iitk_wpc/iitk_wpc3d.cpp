#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
#define s(n) scanf("%d", &(n))
#define sll(n) scanf("%lld", &(n))
#define ll long long

vector<int> v;
int n;

void pre(){
	int p[1000005]={0};
	for(int i=2;i*i<=1000000;++i){
		int j = i*i;
		while(j<=1000000){
			p[j] = 1;
			j+=i;
		}
	}
	for(int i=2;i<=1000000;++i){
		if(p[i] == 0)
			v.push_back(i);
	}
}

ll f(ll num){
	if(binary_search(v.begin(), v.end(), num))
		return 1;
	ll ans = 0LL;
	int count = 0;
	for(int i=0;i<n;++i){
		if(num%v[i]==0){
			ans += v[i];
			++count;
			num/=v[i];
			while(num%v[i] == 0){
				num/=v[i];
			}
		}
		if(num == 1)
			break;
	}
	if(num>1){
		ans+=num;
		++count;
	}
	return (f(ans) + count);
}

int main() {
	pre();
	n = v.size();
	int test;
	s(test);
	while(test--){
		ll num;
		sll(num);
		printf("%lld\n", f(num));
	}
	return 0;
}