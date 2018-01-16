#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int a[1500], i, n, prev, ans;

	scanf("%d",&n);

	while(n!=0){
		ans = 1;
		for(i=0;i<n;++i){
			scanf("%d",&a[i]);
		}

		sort(a, a+n);

		prev = a[0];
		for(i=1;i<n;++i){
			if(a[i]-prev>200){
				ans = 0;
				break;
			}else{
				prev = a[i];
			}
		}

		if(ans!=0){
			if(1422-a[n-1]>100)
				ans=0;
		}

		if(ans == 0)
			printf("IMPOSSIBLE\n");
		else
			printf("POSSIBLE\n");

		scanf("%d",&n);
	}

	return 0;
}