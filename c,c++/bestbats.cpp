#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

long long int fact(int n){
	long long int ans=1;

	if(n==0)
		return 1;

	while(n>0){
		ans*=n;
		n--;
	}
	return ans;
}

int main(){
	int test,a[12],k,c,count,i;
	long long int ans;

	scanf("%d",&test);

	while(test--){
		count=0;
		c=0;

		for(i=0;i<11;++i){
			scanf("%d",&a[i]);
		}

		scanf("%d",&k);

		sort(a,a+11);

	/*	for(i=0;i<11;++i){
			printf("%d ",a[i]);
		}
*/
		for(i=0;i<=10;++i){
			if(a[i]==a[10-k+1])
				++count;

			if(i>10-k && a[i]==a[10-k+1])
				++c;
		}

	//	cout<<c<<count;

		ans=fact(c)*fact(count-c);

		printf("%lld\n",fact(count)/ans);
	}

	return 0;
}