#include <stdio.h>

int main(){
	int test,n,a,b,c,i,d[1000005];

	scanf("%d %d",&test,&n);

	while(test--){
		scanf("%d %d",&a,&b);

		c=1;
		while(a>1 && b>1){
			while(a>b && a>1){
				a/=2;
			}

			while(b>a && b>1){
				b/=2;
			}

			if(a==b && a>0){
				c=a;
				break;
			}
	//		printf("hi\n");
		}
		if(c==0)
			c=1;

		i=0;
		while(c>0){
			d[i]=c;
			c/=2;
			++i;
		}

		while(i--){
			printf("%d ",d[i]);
		}

		printf("\n");
	}

	return 0;
}