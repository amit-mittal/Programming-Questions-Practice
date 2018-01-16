#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int compare (const void *pa,const void *pb ){
    if ( *(int*)(pa) < *(int*)(pb) ) return -1;
  	if ( *(int*)(pa) > *(int*)(pb) ) return 1;
    return 0;
}

int main(){
	int test,a[300005][2],n,m,i,j,ans,r,count;

	scanf("%d",&test);

	while(test--){
		scanf("%d %d",&n,&m);

		for(i=0;i<m;++i){
			scanf("%d %d",&a[i][0],&a[i][1]);
		}

		qsort (a, m, sizeof(a[0]), compare);

		r=1;
		ans=n;
		count=1;
		for(i=1;i<m;++i){
			if(a[i][0]==a[i-1][0]){
				++count;
			}
			else{
				if(count == n-a[i-1][0]){
					ans = a[i-1][0];
					count=1;
					break;
				}
				else
					count = 1;
			}
		}

		if(i==m && count==n-a[m-1][0]){
			ans = a[m-1][0];
		}

		for(i=0;i<m;++i){
			if(a[i][1]==ans && a[i][0]<ans)
				r=0;
		}

		if(r==0)
			printf("1\n");
		else
			printf("2 %d\n", ans);
	}

	return 0;
}