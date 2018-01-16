#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define ll long long

int main() {
	int n, x, y;
	int a[105];
	s(n);
	int sum = 0;
	for(int i=0;i<n;++i){
		s(a[i]);
		sum+=a[i];
	}

	s(x), s(y);
	
	if(sum<2*x || sum>2*(y)){
		printf("0\n");
		return 0;
	}
	
	int v1 = 0, v2 = sum;
	int i=0;
	while(v1<x || v2>y){
		v1+=a[i];
		v2-=a[i];
		++i;
		if(i>=n)
			break;
	}
//	printf("%d %d %d\n", v1, v2, i);

	if(v1<x || v1>y){
		printf("0\n");
		return 0;
	}
	if(v2<x || v2>y){
		printf("0\n");
		return 0;
	}

	printf("%d\n", i+1);

	return 0;
}

/*
Check list:-
1. limits int or long long?
2. check answers on extreme cases.
3. all variables initialised?
4. is value of mod correct (if any)?
5. covered all special cases?
6. Division by 0 or int division for double?
7. 0 indexed or 1 indexed?
8. If multiple cases check re-initialisation of variables.
*/