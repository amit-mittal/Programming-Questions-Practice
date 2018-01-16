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
#define LIM 1000000

int main() {
	int test, n;
	set<int> m;
	
	m.insert(1);
	for(int i=2;i<=1000;++i){
		int val = i*i;
		for(int pow=2;pow<=1001;++pow){
			if(val>=LIM)
				break;
			m.insert(val);
			val=val*i;
		}
	}

	s(test);
	while(test--){
		s(n);
		bool ans = false;
		set<int>::iterator it;
		for(it=m.begin();it!=m.end();++it){
			set<int>::iterator f = m.find(n-(*it));
			if(f!=m.end()){
				ans = true;
				break;
			}
		}
		
		if(ans)
			ps("Yes\n");
		else 
			ps("No\n");
	}

	return 0;
}
