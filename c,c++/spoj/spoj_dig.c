#include<stdio.h>

#define MOD 1000000007

int main()
{
	int test;
	long long int ans,ans1,ans2,n;
	
	scanf("%d",&test);
	
	while(test--){
		scanf("%lld",&n);
		
		ans1=(n*(n-3));
		ans2=(n-1)*(n-2)/2;//left=12
		
		if(n%3==0)
			ans1/=3;
		else
			ans2/=3;//left=4
		
		if(ans1%2==0)
			ans1/=2;
		else
			ans2/=2;//left 2
		
		if(ans1%2==0)
			ans1/=2;
		else
			ans2/=2;//left=1
			
		ans=(ans1%MOD)*(ans2%MOD);
		ans=ans%MOD;
		
		printf("%lld\n",ans);
	}
	
	return 0;
}
