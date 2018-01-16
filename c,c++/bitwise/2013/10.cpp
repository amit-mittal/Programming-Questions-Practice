#include <iostream>
#include <cstdio>

#define MOD 1000000007

using namespace std;

int main(){
	int test, a[1000005],i,m,n;

	scanf("%d",&test);

	while(test--){
		scanf("%d %d",&m,&n);
		a[0]=1;
		for(i=1;i<=n;++i){
			if(i<m){
				a[i]=a[i-1]*m;
				a[i]%=MOD;
			}
			else{
				a[i]=m*a[i-1]-a[i-m];
				a[i]%=MOD;
			}
		}
		printf("%d\n",a[n]);
	}

	return 0;
}