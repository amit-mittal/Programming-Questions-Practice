#include <stdio.h>

#define MAX_LIM 1000400

int main(){
	int test, ans, k=0, a[MAX_LIM+50]={0};
	long long int n, b[100000], i, val;
	
	for(i=2;i*i<MAX_LIM;++i){
		if(a[i] == 0){
			val = i*i;
			while(val<MAX_LIM){
				a[val]=1;
				val+=i;
			}
		}
	}

	k=0;
	for(i=2;i<MAX_LIM;++i){
		if(a[i]==0){
			b[k]=i;
			++k;
		}
	}

	int end = k;

	scanf("%d",&test);

	while(test--){
		ans = 2;
		scanf("%lld",&n);

		if(n==1)
			ans = 1;
		else if(n==3)
			ans = 3;
		else{
			for(i=0 ; i<end ; ++i){
				val = (long long int)b[i]*b[i];
				if(val>n)
					break;

				if(n%b[i]==0){
					ans = 1;
					break;
				}
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}