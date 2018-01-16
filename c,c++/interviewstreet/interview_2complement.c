#include <stdio.h>

int main()
{
	int test,a,b,i,val;
	long long int count;

	scanf("%d",&test);

	while(test--){
		scanf("%d %d",&a,&b);

		count=0;

		if(a<0 && b>=0){
			if(b>(-a)){
			//	++a;
				count+=(32*(-a));

				for(i=-(a);i<=b;++i){
					val=i;

					while(val>0){
						count+=(val%2);
						val=val>>1;
					}
				}
			}
			else{
			//	++a;
				count+=(32*(-a));
			
				for(i=b+2;i<=-a;++i){
					val=i;

					while(val>0){
						count-=(val%2);
						val=val>>1;
					}
				}
			}
		}
		else if(b<0 && a<0){
			count+=(32*(b-a+1));
			for(i=-a;i<=-b;++i){
				val=i;

				while(val>0){
					count-=(val%2);
					val=val>>1;
				}
			}
		}
		else{
			for(i=a;i<=b;++i){
				val=i;

				while(val>0){
					count+=(val%2);
					val=val>>1;
				}
			}
		}
		
		printf("%lld\n",count);
	}

	return 0;
}