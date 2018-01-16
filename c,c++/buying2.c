#include <stdio.h>

int main(){
	int test,buy_max,i,total,a[105],valid,n,x,extra;

	scanf("%d",&test);

	while(test--){
		total=0;
		scanf("%d %d",&n,&x);

		for(i=0;i<n;++i){
			scanf("%d",&a[i]);
			total+=a[i];
		}

		buy_max=(int)total/x;

		extra=total-(buy_max*x);

		valid=1;
		for (i=0;i<n;++i){
			if(a[i]<=extra){
				valid=0;
				break;
			}
		}

		if(valid==1){
			printf("%d\n", buy_max);
		}
		else{
			printf("-1\n");
		}
	}

	return 0;
}