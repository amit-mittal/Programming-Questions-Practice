#include<stdio.h>
#include<string.h>

int main(){
	int test,i,j,n,a[10005],start,stop;
	long long int sum=0,ans;

	scanf("%d",&test);

	while(test--){
		sum=0;
		scanf("%d",&n);

		for(i=0;i<n;++i){
			scanf("%d",&a[i]);
		}

		sum=a[0];
		start=0;
		ans=0;
		for(i=1;i<n;++i){
			if(a[i]<=a[i-1]){
				sum+=a[i];
				stop=i;
			}
			else if(a[i]>a[i-1]){
				stop=i;
				a[i-1]=sum/(stop-start);
		//		min=a[i-1];
				if(a[i-1]>a[i])
					--i;
				else{
					ans=a[i-1];
					break;
				}
				start=i;
			}
		}

		if(ans==0)
			ans=sum/(n-start);

//		printf("%lld\n", sum);
	//	ans=sum/(n-start);

	//	if(ans)

		printf("%lld\n",ans);
	}

	return 0;
}