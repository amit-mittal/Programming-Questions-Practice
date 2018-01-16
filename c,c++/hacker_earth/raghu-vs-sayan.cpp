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

int arr[10005];

int main() {
	int test, a, b, n;
	s(test);
	
	while(test--){
		s(a), s(b), s(n);
		for(int i=0;i<n;++i)
			s(arr[i]);
			
		sort(arr, arr+n);
		
		int sum = 0;
		int count = 0;
		int ans;
		for(int i=0;i<n;++i){
			if(sum+arr[i]<=a && sum+arr[i]<=b){
				sum+=arr[i];
			} else if(sum+arr[i]<=a) {
				ans = 1;
				break;
			} else if(sum+arr[i]<=b) {
				ans = 2;
				break;
			} else {
				ans = 0;
				break;
			}
		}
		
		if(ans == 1){
			printf("Raghu Won\n");
		} else if(ans == 2){
			printf("Sayan Won\n");
		} else {
			printf("Tie\n");
		}
	}
	
	return 0;
}