#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int test, b[51],i,j,n,m,ans,k;
	char a[51][51];

	scanf("%d",&test);

	while(test--){
		scanf("%d %d %d",&n,&m,&k);

		for(i=0;i<n;++i){
			b[i]=0;
		}

		for(i=0;i<n;++i){
			scanf("%s",a[i]);

			for(j=0;j<m;++j){
				if(a[i][j]=='.')
					++b[i];
			}
		}

		sort(b,b+n);

		for(i=n-1;i>=0;--i){
			if(b[i]>m/2){
				--k;
				b[i]=m-b[i];
			}

			if(k==0)
				break;
		}

		if(k&1){
			sort(b,b+n);
			b[n-1]=m-b[n-1];
		}

		ans=0;
		for(i=0;i<n;++i)
			ans+=b[i];

		printf("%d\n", (m*n)-ans);
	}

	return 0;
}