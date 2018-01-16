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
#include <utility>

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

int m;
int ans;

void getBestTime(int stocks[], int sz, int &buy, int &sell) {
  int min = 0;
  int maxDiff = 0;
  buy = sell = 0;
  for (int i = 0; i < sz; i++) {
    if (stocks[i] < stocks[min])
      min = i;
    int diff = stocks[i] - stocks[min];
    if (diff > maxDiff) {
      buy = min;
      sell = i;
      maxDiff = diff;

		if(stocks[sell]-stocks[buy]>0){
			int amt = m/stocks[buy];
			int cost = amt*(stocks[sell]-stocks[buy]);
			if((m+cost)>ans)
				ans = m+cost;
		}
    }
  }
}

int main() {
	int test, n;
	s(test);
	while(test--){
		int a[100005];
		s(n), s(m);
		ans = m;

		for(int i=0;i<n;++i){
			s(a[i]);
		}
		
		if(n==1){
			p(m), nline;
			continue;
		}

		int buy, sell;
		getBestTime(a, n, buy, sell);
		p(ans), nline;
		}
	return 0;
}
