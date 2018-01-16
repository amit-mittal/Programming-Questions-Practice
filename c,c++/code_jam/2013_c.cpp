#include <iostream>
#include <cstdio>
#include <cmath>

#define ll long long
#define s(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)

using namespace std;

int palindrome(ll int val){
	ll int ans = 0;
	int rem;
	ll int temp = val;

	while(temp>0){
		rem = temp%10;
		if(rem>=3)
			return 0;
		temp = temp/10;

		ans = ans*10;
		ans+=rem;
	}

	if(ans-val==0)
		return 1;
	else
		return 0;
}

int palindrome_sq(ll int val){
	ll int ans = 0;
	int rem;
	ll int temp = val;

	while(temp>0){
		rem = temp%10;
		temp = temp/10;
		
		ans = ans*10;
		ans+=rem;
	}

	if(ans-val==0)
		return 1;
	else
		return 0;
}

int main(){
	int test;
	ll int a, b, l, g, count;

	s(test);
	
	for(int t=1;t<=test;++t){
		count = 0;
		sl(a), sl(b);

		l = sqrt(a);
		g = sqrt(b);

		if(l*l<a){
			l+=1;
		}

		if(l<=3 && g>=3){
			++count;
		}

		for(ll int j=l;j<=g;++j){
			if(j%10!=1 && j%10!=2)
				continue;

			if(palindrome(j)){
				if(palindrome_sq(j*j)){
					printf("%lld\n",j);
					++count;
				}
			}
		}
		
		printf("Case #%d: %lld\n", t, count);
	}
	return 0;
}