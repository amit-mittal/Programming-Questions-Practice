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
#define MAX_LIM 1000005

int main() {
	int n, val;
	int a[MAX_LIM+5];
	vector<int> v1;
	vector<int> v2;

	for(int i=2;i*i<MAX_LIM;++i){
		if(a[i] == 0){
			val = i*i;
			while(val<MAX_LIM){
				a[val]=1;
				val+=i;
			}
		}
	}

	for(int i=2;i<100;++i){
		if(a[i]==0){
			v1.push_back(i);
			v2.push_back(i);
		}
	}

	for(int i=101;i<1000;++i){
		if(a[i]==0)
			v1.push_back(i);
	}

	while(scanf("%d",&n)){
		if(n==0)
			break;

		bool ans = false;
		for(int i=0;i<v2.size();++i){
			if(v2[i]*v2[i]*v2[i]>=n)
				break;
			for(int j=0;j<v1.size();++j){
				if((v1[j]*v1[j]) + (v2[i]*v2[i]*v2[i])>=n-1)
					break;
				else{
					if(a[n - (v1[j]*v1[j]) - (v2[i]*v2[i]*v2[i])]==0){
						ans = true;
						printf("%d %d %d\n", n - (v1[j]*v1[j]) - (v2[i]*v2[i]*v2[i]), v1[j], v2[i]);
						break;
					}
				}
			}
			if(ans)
				break;
		}

		if(!ans){
			printf("0 0 0\n");
		}
	}

	return 0;
}