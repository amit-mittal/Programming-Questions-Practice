#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	long long int n, a[10005], sum=0, ans = 0;
	scanf("%lld",&n);
	for(int i=0;i<n;++i){
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	long long int avg = sum/n;
	long long int max = -1, max_index, count;

	while(1){
		max = a[0], max_index=0;
		for(int i=1;i<n;++i){
			if(a[i]>max){
				max = a[i];
				max_index = i;
			}
		}

		if(max==avg)
			break;

		if(a[(max_index+1+n)%n]>=a[(max_index-1+n)%n]){
			a[(max_index-1+n)%n]+=1;
			a[max_index]-=1;
		}else{
			a[(max_index+1+n)%n]+=1;
			a[max_index]-=1;
		}
		ans+=1;
	}

	printf("%lld\n", ans);

	return 0;
}