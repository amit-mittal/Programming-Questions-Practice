#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	int a[100005];

	scanf("%d",&n);
	
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}

	int minL[100005], minR[100005];
	for(int i=0;i<n;++i)
		minL[i]=minR[i]=1;

	for(int i=1;i<n;++i){
		if(a[i]>a[i-1])
			minL[i] = minL[i-1]+1;
	}
	
	for(int i=n-2;i>=0;--i){
		if(a[i]>a[i+1])
			minR[i] = minR[i+1]+1;
	}

	int ans=0;
	for(int i=0;i<n;++i){
		ans+=max(minL[i], minR[i]);
	}

	printf("%d\n", ans);

	return 0;
}
