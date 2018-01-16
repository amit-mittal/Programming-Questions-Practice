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
#define ninf -2147483647
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
	int test, n;
	s(test);
	while(test--){
		ll int a[10002];
		ll int min1 = 1000000001;
		ll int max1 = -1000000001;
		ll int sum1 = ninf;//max
		ll int sum2 = inf;//min
		ll int sum = 0;
		
		s(n);
		for(int i=0;i<n;++i){
			sll(a[i]);
			min1 = min(min1, a[i]);
			max1 = max(max1, a[i]);
		}

		if((min1>=0 && max1>=0)){
			sum1 = 0;
			sum2 = 0;
			if(a[0]>a[n-1]){
				for(int i=0;i<n-1;++i){
					sum1+=a[i];
				}
				sum2 = a[n-1];
			}else{
				for(int i=1;i<n;++i){
					sum1+=a[i];
				}
				sum2 = a[0];
			}
		} else if((min1<=0 && max1<=0)){
			sum1 = 0;
			sum2 = 0;
			if(a[0]>a[n-1]){
				for(int i=1;i<n;++i){
					sum2+=a[i];
				}
				sum1 = a[0];
			}else{
				for(int i=0;i<n-1;++i){
					sum2+=a[i];
				}
				sum1 = a[n-1];
			}
		} else{
			for(int i=0;i<n;){
				if(a[i]>=0){
					while(a[i]>=0 && i<n){
						sum+=a[i];
						++i;
					}
					sum1 = max(sum1, sum);
					sum2 = min(sum2, sum);
					sum = 0;
				}
				if(a[i]<=0){
					while(a[i]<=0 && i<n){
						sum+=a[i];
						++i;
					}
					sum1 = max(sum1, sum);
					sum2 = min(sum2, sum);
					sum = 0;
				}
			}
		}
		pll(sum1-sum2),nline;
	}
	return 0;
}