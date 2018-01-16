#include<stdio.h>
#include<string.h>

#define MOD 1000000007

//it is getting wrong if values are very large like 10^100 and it is due to loss in precision

long long int func(int b,int n)//b^n
{
	long long int val,ans;
	
	if(n==0)
		return 1;
	else if(n<0)
		return(func(1/b,-n));
	else
	{
		if(n&1)
		{
			val=func(b,(n-1)/2);
			ans=b*val*val;
		}
		else
		{
			val=func(b,n/2);
			ans=val*val;
		}
		
		ans=(ans+MOD)%MOD;
	}
	return ans;
		
}

int main()
{
	int b,e;
	long long int ans;

	printf("Enter the number x: ");
	scanf("%d",&b);
	
	printf("Enter the power: ");
	scanf("%d",&e);
	
	ans=func(b,e);
	
	printf("%lld\n",ans);
	
	return 0;
}
