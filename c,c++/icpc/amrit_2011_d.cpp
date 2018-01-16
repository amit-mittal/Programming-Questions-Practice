#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int test,i,n,max,ans,a[52];

	scanf("%d",&test);

	while(test--){
		int b[102]={0};

		scanf("%d",&n);

		ans=0;
		sum=0;
		max=n-1;

		for(i=0;i<n;++i)
			scanf("%d",&a[i]);

		sort(a,a+n);

		for(i=0;i<n;++i){
			if(a[i]==max){
				b[max]=1;
				--max;
			}
			sum+=a[i];
		}

		extra=(n*(n-1)/2)-sum;

		if(extra<0){//there are extra nos
			for(i=0;i<n;++i){
				if(b[a[i]]==1)
					continue;
				else{
					if(a[i]>max){
						ans+=(max-a[i]);
						--max;
					}
					else if(a[i]<max){
						
					}
				}
			}
		}
		else if(extra>0){//there are less no.s

		}
		else{//no extra but entries can be wrong

		}
	}

	return 0;
}