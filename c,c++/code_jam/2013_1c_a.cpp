//Author: Amit Mittal
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
	ll int t, test, n;
	char a[1000006];
	vector<ll int> b;
	vector<ll int> v;
	lls(test);

	for(int t=1;t<=test;++t){
		b.clear();
		v.clear();
		ss(a), lls(n);
		ll int len = strlen(a);

		ll int count = 0;
		ll int vow = 0;
		for(int i=0;i<len;++i){
			while(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && i<len){
				if(vow>0){
					b.push_back(vow);
					v.push_back(1);
					vow = 0;
				}
				++count;
				++i;
			}

			if(i<len){
				if(count>0){
					if(count<n){
						vow = count;
					}else{
						b.push_back(count);
						v.push_back(0);
					}
					count = 0;
				}
				++vow;
			}
		}
		if(count>0){
			if(count<n){
				vow = count;
			}else{
				b.push_back(count);
				v.push_back(0);
			}
			count = 0;
		}

		if(vow>0){
			b.push_back(vow);
			v.push_back(1);
		}

		ll int ans = 0;
		for(int i=0;i<v.size();++i){
			if(v[i]==0){//consonant
				int g = 0;
				for(int j=i+1;j<v.size();++j){
					if(v[j]==0){
						if(g==0){
							g=1;
							ans+=((b[i]-n+1)*b[j]);
							ans+=((b[j]-n+1)*(b[i]-1));
						}else{
							ans+=(b[i]*b[j]);
						}
					}
				}
				ans+=(ll int)(((b[i]-n+1)*(b[i]-n+2))/2);
			}
			else{//vowel
				int g = 0;
				for(int j=i+1;j<v.size();++j){
					if(v[j]==0){
						if(g==0){
							g = 1;
							ans+=((b[j]-n+1)*b[i]);
						}else{
							ans+=((b[i])*(b[j]));
						}
					} else{
						if(g==1){
							ans+=((b[i])*(b[j]));
						}
					}
				}

				g=0;
				for(int j=i-1;j>=0;--j){
					if(v[j]==0){
						if(g!=1){
							g = 1;
							ans+=((b[j]-n+1)*b[i]);
						} else{
							ans+=((b[j])*b[i]);
						}
					}
				}
			}
		}

		printf("Case #%d: %lld\n",t, ans);
	}
	return 0;
}