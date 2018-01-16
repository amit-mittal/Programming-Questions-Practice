#include <stdio.h>

#define MOD 1000000007

int main()
{
	int test,n,i;
	long long int a[1005];
	
	a[1] = 1;
	for(i=2;i<=1002;++i){
		a[i] = (3*a[i-1])-1;
		if(a[i]>=MOD)
			a[i]=a[i]%MOD;
	}

	scanf("%d",&test);
	while(test--) {
		scanf("%d",&n);
		printf("%lld\n",a[n]);
	}
	return 0;
}
