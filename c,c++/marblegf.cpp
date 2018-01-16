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

#define MAX 1000006

//Indexing of BIT starts from 1 and NOT 0
ll bit[MAX];
int maxVal;

void update(int idx, ll data){
	while(idx<=maxVal){
		bit[idx] += data;
		idx += (idx & -idx);
	}
}

ll read(int idx){
	ll res = 0LL;
	while(idx>0){
		res += bit[idx];
		idx -= (idx & -idx);
	}
	return res;
}

int main() {
	ll x, y, val;
	char action[5];
	int n, q;
	s(n), s(q);
	maxVal = n;
	for(int i=1;i<=n;++i){
		sll(val);
		update(i, val);
	}
	while(q--){
		ss(action), sll(x), sll(y);
		if(action[0]=='S'){
			if(x==0)
				pll(read(y+1)), nline;
			else
				pll(read(y+1)-read(x)), nline;
		} else if(action[0]=='G'){
			update((int)x+1, y);
		} else if(action[0]=='T'){
			update((int)x+1, -y);
		}
	}	
	
	return 0;
}
