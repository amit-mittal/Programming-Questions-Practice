#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int compare (const void *pa,const void *pb ) {
    if ( *(int*)(pa) < *(int*)(pb) ) return -1;
  	if ( *(int*)(pa) > *(int*)(pb) ) return 1;
    return 0;
}

int main(){
	long long int test,i,j,n,a[100005][2],b[100005],max,min;
	long long int ans,ans_max=-1;

	scanf("%lld",&test);

	while(test--){
		scanf("%lld",&n);

		for(i=0;i<n;++i){
			scanf("%lld",&a[i][0]);
			a[i][1]=i;
		}

		qsort (a, n, sizeof(a[0]), compare);

		ans_max=-1;
		max=a[n-1][1];
		min=a[n-1][1];
		for(i=n-2;i>=0;--i){
			if(abs(max-a[i][1])>abs(min-a[i][1]))
				ans=a[i][0]*abs(max-a[i][1]);
			else
				ans=a[i][0]*abs(min-a[i][1]);

			if(ans>ans_max)
				ans_max=ans;

			if(a[i][1]>max)
				max=a[i][1];

			if(a[i][1]<min)
				min=a[i][1];
		}

		printf("%lld\n",ans_max);
	}

	return 0;
}