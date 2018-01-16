#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

int n, a[100005];
int b[100005];
char str[100005];

int solve(int index, bool equal){
	if(index==0){
		if(equal){
			if(str[0]=='0')
				return 0;
			else
				return a[0];
		} else {
			return a[0];
		}
	}

	int ans1 = (str[index]-'0')*a[index] + solve(index-1, true);
	int ans2 = -1;
	if(str[index] - '0'==1)
		ans2 = b[index];

	return max(ans1, ans2);
}

int main(){
	s(n);
	for(int i=0;i<n;++i){
		s(a[i]);
	}
	ss(str);

	b[0] = 0;
	for(int i=1;i<n;++i){
		b[i] = b[i-1]+a[i-1];
	}

	int ans = solve(n-1, true);
	printf("%d\n", ans);

	return 0;
}