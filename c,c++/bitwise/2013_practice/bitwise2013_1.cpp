#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

#define MOD 1000000007
#define llt long long int
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)

//main code begins now

llt modulo_inverse(llt a){
	a = a % MOD;
	llt p = MOD-2;
	llt product = 1;
	llt temp_pro = a;
	while(p>0){

		if(p%2==1)
			product = (product*temp_pro)%MOD; 
		
		p = p/2;

		temp_pro = (temp_pro*temp_pro)%MOD;
	}

	return product;
}

llt nck(llt n, llt k){
	if(n==0) return 1;
	llt num=1, denom=1;
	for(llt i = 2; i <= k; i++)
		denom = (denom * i)%MOD;
	for(llt i = n; i>=n-k+1; i--)
		num = (num * i)%MOD;
	denom = modulo_inverse(denom);
	return (num*denom)%MOD;
}

int main(){

	llt n,k,k1,k2,ans;

	
		sll(n);
		sll(k);

	while (!(n==0 && k==0)){

		n = n - 1;
		k = k + 1;
		k1 = k/2;
		k2 = k - k1;

		if(k2>n){
			cout<<"0\n";
            sll(n); sll(k);	
			continue;
		}

		if(n==0){
			cout<<"1\n";
            sll(n); sll(k);	
			continue;
		}
		
		ans = (2*(nck(n-1,k1-1)*nck(n-1,k2-1))%MOD)%MOD;

		cout<<ans<<endl;
        sll(n); sll(k);	

	}

	return 0;
}
