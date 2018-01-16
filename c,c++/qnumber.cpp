#include <iostream>
#include <stdio.h>
#include <math.h>

#define ll long long

using namespace std;

inline void fastRead(ll int *a)
{
    register char c=0;
    while (c<33) c=getchar();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar();
    }
}

ll int gcd(ll int a,ll int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

ll int factors(ll int n){
	ll int count=2,i;

	if(n==1)
		return 1;
	else if(n==0)
		return 0;
	else if(n<=3)
		return 2;
//	else if(n==6)
//		return 4;

	if(n&1){
		for (i=3;i<((ll int)sqrt(n)+1);i+=2)
		{
			if(n%i==0)
				count+=2;
		}

		if((ll int)sqrt(n)==(double)sqrt(n) && n>3)
			--count;
	}
	else{
		for (i=2;i<((ll int)sqrt(n)+1);++i)
		{
			if(n%i==0)
				count+=2;
		}

		if((ll int)sqrt(n)==(double)sqrt(n) && n>3)
			--count;
	}
	return count;
}

int main(){
	ll int n,k,val,ans,q,t,value;

	fastRead(&n);
	fastRead(&q);
//	scanf("%lld %d",&n,&q);

	value=factors(n);

	while(q--){
//		scanf("%d %lld",&t,&k);
		fastRead(&t);
		fastRead(&k);

		if(t==1){
			val=gcd(n,k);
			ans=factors(val);
		}
		else if(t==2){
			if(n==k)
				ans=1;
			else if(k>n)
				ans=0;
			else{
				if(gcd(n,k)==k){
					ans=factors(n/k);
				}
				else{
					ans=0;
				}
			}
		}
		else{
			if(k==n){
				ans=value-1;
			}
			else if(k<n){
				if(gcd(k,n)!=k)
					ans=value;
				else{
					val=factors(n/k);
					ans=value-val;
				}
			}
			else if(k>n){
				ans=value;
			}
		}

		printf("%lld\n",ans);
	}

	return 0;
}