#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n, a[105], x, y, sum=0, ans=0;

	scanf("%d",&n);

	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
		sum+=a[i];
	}

	scanf("%d %d",&x,&y);

	if(x==y)
		printf("0\n");
	else{
		int q=min(x,y);
		int r=max(x,y);
		int diff=r-q;
		for(int i=0;i<diff;++i){
			ans+=a[i+q-1];
		}
		int other = sum-ans;
		printf("%d\n", min(ans,other));
	}

	return 0;
}