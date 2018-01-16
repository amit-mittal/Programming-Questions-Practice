#include <stdio.h>

int main(){
	int test,i,n,check,ans,val,sum;

	scanf("%d",&test);

	while(test--){
		check = 0;
		scanf("%d",&n);

		for(i=0;i<n;++i){
			ans = val = i;
			sum=val;

			while(val>0){
				sum+=(val%10);
				val/=10;

				if(sum>n)
					break;
			}

			if(sum==n){
				check=1;
				break;
			}
		}

		if(check==0)
			printf("NONE\n");
		else{
			printf("%d\n", ans);
		}
	}

	return 0;
}