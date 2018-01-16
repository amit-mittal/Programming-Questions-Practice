#include <iostream>
#include <cstdio>

using namespace std;

#define MOD 1000000009

long long int exp(long long int p, long long int q){
	long long r = 1;
	while(q>0){
		if(q%2 == 1){
			r = r*p;
			if(r>MOD)
				r = r%MOD;
			--q;
		}
		p*=p;
		q/=2;
		if(p>MOD)
			p = p%MOD;
	}
	return r;
}

int main(){
	int n, m, k;
	scanf("%d %d %d",&n,&m,&k);
	
	int incorrect = n- m;
	int v = n/k;

	long long int ans;
	if(v>incorrect){
		long long int diff = (long long int)(v - incorrect);
		ans = (((exp(2L, diff+1)) - 2)*k);
		ans = ans%MOD;
		ans += (n-(diff*k)-incorrect);
	} else {
		ans = m;
	}

	ans = ans%MOD;

	printf("%lld\n", ans);

	return 0;
}
