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
	int n, m;
	int a[300005][3];
	s(n), s(m);
	for(int i=0;i<m;++i){
		s(a[i][0]), s(a[i][1]), s(a[i][2]);
	}

	int b[300005]={0};
	
	for(int i=0;i<m;++i){
		for(int j=a[i][0];j<=a[i][1];++j){
			if(b[j]==0 && j!=a[i][2]){
				b[j] = a[i][2];
			}
		}
	}
	for(int i=1;i<=n;++i){
		printf("%d ", b[i]);
	}
	printf("\n");
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