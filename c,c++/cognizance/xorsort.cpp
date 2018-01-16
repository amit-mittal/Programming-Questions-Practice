#include <iostream>
#include <cstdio>
#include <vector>

#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define ll long long

using namespace std;

ll int a[1002];
ll int ans;

int get_bit(ll int decimal, int N){
	ll int constant = 1 << (N-1);
	if( decimal & constant )
		return 1;
	return 0;
}

ll int exp(ll int a, ll int b){
	if(b<1)
		return 1;
  ll int result = 1;

  while (b){
    if (b&1){
      result *= a;
    }
    b >>=1 ;
    a *= a;
  }

  return result;
}

void func(int start, int end, int bit){	
	if(end<=start)
		return;

	if(bit<1)
		return;

	int b;
	int change = -1;
	int prev=-1, index;

	for(int i=start; i<=end; ++i){
		b = get_bit(a[i], bit);
		if(b!=prev){
			index = i;
			++change;
		}
		prev=b;
	}

	if(change==0)
		func(start, end, bit-1);

	if(change==1){
		if(get_bit(a[index], bit)==0)
			ans+=exp(2,bit-1);
		func(start, index-1, bit-1);
		func(index, end, bit-1);
	}

	if(change>1){
		ans = -1;
	}
}

int main(){
	int test, n;
	s(test);
	while(test--){
		ans = 0;
		s(n);

		for(int i=0;i<n;++i){
			sll(a[i]);
		}

		func(0, n-1, 60);
		printf("%lld\n", ans);
	}

	return 0;
}