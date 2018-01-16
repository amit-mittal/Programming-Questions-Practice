#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
	int test,n,l,h,i,a[1005],j,k,m,ans,mini,maxi,val;
	int b[1000005];

	scanf("%d",&test);

	while(test--){
		ans=0;

		scanf("%d %d %d",&n,&l,&h);

		for(i=0;i<n;++i){
			scanf("%d",&a[i]);
		}

		qsort(a,n,sizeof(int),compare);

		for(i=0;i<=1000000;++i)
			b[i]=-1;

		for(i=0;i<n;++i){
			val=a[i];
			if(b[val]==-1)
				b[val]=i;//storing index
		}
/*
		for(i=0;i<n;++i){
			printf("%d\n", a[i]);
		}

		for(i=0;i<=10;++i){
			printf("%d\n", b[i]);
		}*/

		for(i=0;i<n;++i){
			for(j=i+1;j<n;++j){/*
				if(a[j]==a[j-1] && j!=i+1)
					continue;*/

				mini=l-a[i]-a[j];
				maxi=h-a[i]-a[j];

				k=mini;
				while(b[k]==-1){
					++k;
				}

				if(k>a[n-1] || k<j)
					continue;

				m=maxi;
				while(b[m]==-1){
					--m;
				}

				if(m>a[n-1] || m<j)
					continue;

				cout<<k<<" "<<b[k]<<" "<<m<<" "<<b[m]<<endl;

				if(b[m]>b[k] && m>=a[0] && k<=a[n-1] && b[m]!=-1 && b[k]!=-1){
					ans+=b[m]-b[k]+1;
				}
			}
		}

		printf("%d\n",ans);
	}

	return 0;
}