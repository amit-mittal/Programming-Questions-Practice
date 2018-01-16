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

int n;
int b[105];
int c[105];

int func(int val, int a[], int index){
	if(b[index]==-1){
		if(val>a[index]){
			b[index] = func(val+a[index], a, index+1);
			c[index] = val;

			return b[index];
		}

		int ans;
		if(val<=a[index]){
			int val1 = func((2*val)-1, a, index);
			int val2 = func(val, a, index+1);
			if(val1 > val2){
				b[index] = 1+val2;
				c[index] = val;
			}
			else{
				b[index] = 1+val1;
				c[index] = (2*val)-1;	
			}
			return b[index];
		}
	} else{
		if(val>=c[index])
			return b[index];
		else{
			if(func((2*val)-1, a, index) > func(val, a, index+1)){
				b[index] = 1+func(val, a, index+1);
				c[index] = val;
			}
			else{
				b[index] = 1+func((2*val)-1, a, index);
				c[index] = (2*val)-1;	
			}
			return b[index];
		}
	}
}

int main() {
	int test, a[105], val;
	s(test);

	for(int t=1;t<=test;++t){
		s(val), s(n);
		for(int i=0;i<n;++i)
			s(a[i]);

		for(int i=0;i<n;++i)
			b[i] = -1;
		b[n] = 0;
		c[n] = 0;

		sort(a, a+n);
		int ans;
		if(val==1)
			ans = n;
		else
			ans = func(val, a, 0);
		printf("Case #%d: %d\n", t, ans);
	}

	return 0;
}
