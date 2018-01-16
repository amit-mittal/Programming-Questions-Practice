#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
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

int main(){
	int test, len, i, val,t,m[200],j,l,ans,index;
	ll int n,k,a,b,c,r;

	s(test);

	for(t=1;t<=test;++t){
		lls(n);lls(k);lls(a);lls(b);lls(c);lls(r);
		m[0]=a;

		FOR(i,1,k){
			m[i]=(b*m[i-1]+c)%r;
		}

		FOR(i,k,k+5){
			ans=1;
			
			FOR(j,1,100){
				for(index=i-k;index<i;++index){
					if(m[index]==j){
						ans=0;
					//	cout<<j<<endl;
						break;
					}
				}
				if(ans==1){
					cout<<j<<endl;
					m[i]=j;
					break;
				}
			}
			cout<<i<<endl;
		}

//		for(i=k;i<k+5;++i)
//			cout<<m[i]<<endl;
	}

	return 0;
}