#include <stdio.h>
#include <math.h>

#define ll long long

int valid(ll num){
	while(num>0){
		int r = num%10;
		num/=10;
		if(!(r==0 || r==1 || r==4 || r==9))
			return 0;
	}
	return 1;
}

int main() {
	int test, count;
	ll a, b, i, l, m, sq;
	int arr[100005];
	
	arr[0] = 0;
	for(i=1LL;i<=100000LL;++i){
		sq = i*i;
		if(valid(sq))
			arr[i] = arr[i-1] + 1;
		else
			arr[i] = arr[i-1];
	}
	
	scanf("%d", &test);
	while(test--){
		scanf("%lld %lld", &a, &b);
		
		l = sqrt(a) - 1;
		m = sqrt(b) + 1;
		while(l*l<a)
			++l;
		while(m*m>b)
			--m;
		count = arr[m]-arr[l-1];
		if(count<0)
			count = 0;
		printf("%d\n", count);
	}
	return 0;
}