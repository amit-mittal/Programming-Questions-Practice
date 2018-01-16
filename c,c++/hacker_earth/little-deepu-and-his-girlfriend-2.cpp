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

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
#define mod 1000000007
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second

int a[10005];
int v[101];

int main() {
	int test;
	s(test);
	while(test--){
		int m, n;
		
		s(m), s(n);
		for(int i=0;i<n;++i)
			s(v[i]);
		
		a[0] = 0;
		for(int i = 1; i <= m; ++i){
			bool win = false;
			
			for(int j = 0 ; j < n ; ++j){
				if(i >= v[j]){
					if(a[i - v[j]] == 0){
						win = true;
						break;
					}
				}
			}
			
			if(win){
				a[i] = 1;
			} else {
				a[i] = 0;
			}
		}
		
		if(a[m] == 1)
			printf("Little Deepu\n");
		else
			printf("Kate\n");
	}
	
	return 0;
}