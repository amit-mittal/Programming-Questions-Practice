#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define MOD 1000000007

int calc(ll int num){
	int c = 0;
	while(num>0){
		num=num/10;
		++c;
	}
	return c;
}

ll int s(ll int a, ll int b){
	ll int sum;
	
	if((a+b)%2==0){
		sum = (a+b)/2;
		sum = sum*(b-a+1);
	} else {
		sum = (b-a+1)/2;
		sum = sum*(b+a);
	}

	if(sum>=MOD)
		sum = sum%MOD;

	return sum;
}

ll int b[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

int main(){
	ll int test, l, r;
	cin>>test;
	while(test--){
		cin>>l>>r;

		int l1 = calc(l);
		int r1 = calc(r);

		ll int sum = 0;
		ll int e = -1;
		
		for(ll int i=l1;i<=r1;++i){
			ll int f = max(l, e+1);
			e = min(r, b[i]-1);
			
			sum+=(i*s(f, e));

			if(sum>=MOD)
				sum = sum%MOD;
		}

		cout<<sum<<endl;
	}
	
	return 0;
}