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

int n;
ll finals[100005];
ll q[100005][3];

int search(ll index){
	/*for(int i=1;i<=n;++i){
		if(finals[i]>=index)
			return i;
	}*/
	int first = 1;
   int last = n;
   int middle = (first+last)/2;
 
   while( first <= last )
   {
      if ( finals[middle] < index )
         first = middle + 1;    
      else if ( finals[middle] == index ) 
      {
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if(finals[middle] == index)
   	return middle;
   if(finals[last]>=index)
   	return last;
   	if(finals[first]>=index)
   	return first;
}

ll query(ll index){
	int in = search(index);
	if(q[in][0] == 1){
		return q[in][1];
	}
	ll rem = index - finals[in-1];
	if(rem%q[in][1]>0)
		rem = rem%q[in][1];
	else
		rem = q[in][1];
	return query(rem);
}

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	finals[0] = 0LL;
	for(int i=1;i<=n;++i){
		cin >> q[i][0];
		if(q[i][0] == 1){
			cin >> (q[i][1]);
			finals[i] = finals[i-1] + 1LL;
		} else {
			cin >> (q[i][1]);
			cin >> (q[i][2]);
			finals[i] = (ll)(finals[i-1]+((ll)(q[i][1]*q[i][2])));
		}
	}
	
	int test;
	cin >> (test);
	while(test--){
		ll num;
		cin >> num;
		cout << query(num) << " ";
	}
	
	return 0;
}
