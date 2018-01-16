#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)
#define MOD 1000000007
#define ll long long

using namespace std;

int arr[1001],n,a,b;
ll int ans[1001];
ll int count=1;

int main(){
	int m,x;

	s(n), s(a), s(b);
	s(m);

	for(int i=1;i<=n;++i){
		arr[i]=1;
		ans[i]=1;
	}

	for(int i=0;i<m;++i){
		s(x);
		arr[x]=0;
		ans[x]=0;
	}

	for(int i=n;i>0;--i){
		if(arr[i]==1){
			if(a*i<=n)
				arr[a*i]=0;
			if(b*i<=n)
				arr[b*i]=0;

			for(int j=i+1;j<=n;++j){
				if(arr[j]==1){
					ans[i]+=ans[j];

				if(ans[i]>=MOD)
					ans[i]%=MOD;
				}
			}

			if(a*i<=n)
				arr[a*i]=1;
			if(b*i<=n)
				arr[b*i]=1;
		}
	}

	for(int i=1;i<=n;++i){
		count+=ans[i];
		if(count>=MOD)
			count%=MOD;
	}

	printf("%lld\n", count);

	return 0;
}