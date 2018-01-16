#include <stdio.h>
#include <iostream>
#include <cstring>

#define MOD 1000000007
#define ll long long

using namespace std;

ll int expt(ll int p, ll int q)
{
	ll int r = 1;

	while (q != 0) {
		if (q % 2 == 1) {
			r *= p;
			q--;
			if(r>MOD)
				r%=MOD;
		}
		p *= p;
		q /= 2;
		if(p>MOD)
			p%=MOD;
	}
	if(r>MOD)
		r%=MOD;

	return r;
}

ll int inverse(ll int n){
	return expt(n, MOD-2);
}

ll int fact(ll int n){
	ll int r= 1;
	for(int i=n;i>1;--i){
		r*=i;
		if(r>MOD)
			r%=MOD;
	}
	return r;
}

int main(){
	char a[100005];
	scanf("%s",a);
	int len = strlen(a);
	int b[26]={0};
	for(int i=0;i<len;++i)
		++b[a[i]-'a'];
	ll int ans;
	len/=2;
	ans = fact(len);
	for(int i=0;i<26;++i){
		b[i]/=2;
		if(b[i]>0){
			ans = ans*inverse(fact(b[i]));
			ans = ans%MOD;
		}
	}
	printf("%lld\n", ans);
	return 0;
}