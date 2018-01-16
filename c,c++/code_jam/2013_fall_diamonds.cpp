//Author: Amit Mittal
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>

using namespace std;

#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define lls(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define llp(a) printf("%lld",a)
#define sp(a) printf("%s",a)
#define cp(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

int main() {
	int test, x, y, n;
	double ans;
	s(test);

	for(int t=1;t<=test;++t){
		ans = 1.0;
		s(n), s(x), s(y);
		
		if((x+y)%2==1){
			ans = 0.0;
		}
		else{
			//handle x+y=0 separately
			int lower = (x+y)/2;
			int upper = lower+1;
			int sum1 = lower*((2*lower) - 1);
			int sum2 = upper*((2*upper) - 1);

			if(n>=sum2){
				ans = 1.0;
			}
			else if(n<=sum1){
				ans = 0.0;
			}
			else{
				int diff = n - sum1;
				int h = y+1;
				if(h>diff)
					ans = 0.0;
				else{
						for(int i=0;i<h;++i)
							ans = ans/2.0;
						if()
						ans = ans*(diff-h);
				}
			}
		}

		printf("Case #%d: %lf\n", t, ans);
	}

	return 0;
}
