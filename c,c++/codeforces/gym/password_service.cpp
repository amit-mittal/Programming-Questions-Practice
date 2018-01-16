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

#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define pll(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

int main() {
	int n;
	char str[5005];

	s(n);
	ss(str);
	int minl[5005]={0}, minr[5005]={0};
	int len = strlen(str);
	
	bool ans = true;
	for(int i=0;i<len;++i){
		if(str[i]=='='){
			minl[i+1] = minl[i];
		}else if(str[i]=='<'){
			minl[i+1] = minl[i]+1;
		}
		if(minl[i+1]>=n)
			ans = false;
	}
	
	for(int i=len-1;i>=0;--i){
		if(str[i]=='='){
			minr[i] = minr[i+1];
		}else if(str[i]=='>'){
			minr[i] = minr[i+1]+1;
		}
		if(minr[i]>=n)
			ans = false;
	}

	char s[5005];
	for(int i=0;i<=len;++i){
		s[i] = 'a' + max(minl[i], minr[i]);
	}

	if(ans)
		ps(s), nline;
	else
		printf("-1\n");
	return 0;
}
