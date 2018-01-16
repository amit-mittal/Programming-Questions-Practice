#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
	int test,n,i,a[5005],min,ans;

	scanf("%d",&test);

	while(test--){
		scanf("%d",&n);

		for (i=0;i<n;++i)
			scanf("%d",&a[i]);

		sort(a,a+n);

		if(a[1]>a[0])
			min=a[1]-a[0];
		else
			min=a[0]-a[1];

		for(i=2;i<n;++i){
			if(a[i]>a[i-1])
				ans=a[i]-a[i-1];
			else
				ans=a[i-1]-a[i];

			if(ans<min)
				min=ans;
		}

		printf("%d\n",min);
	}

	return 0;
}