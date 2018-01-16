#include <stdio.h>

int power(int base, int exp){
	int x;

	if(exp==0)
		return 1;
	else if(exp==1){
		return base;
	}

	if(exp%2==0){
		x=power(base,exp/2);
		return x*x;
	}
	else{
		x=power(base,exp/2);
		return base*x*x;
	}
}

int func(int val){
	int product=1,i;

	for(i=0;;++i){
		if(product>val)
			break;

		product*=2;
	}
	product/=2;

	return i;
}

int main(){
	int test,sum,n,val;

	scanf("%d",&test);

	while(test--){
		sum=0;
		scanf("%d",&n);

		while(n>0){
			val=func(n);
			sum+=power(5,val);
			n-=power(2,val-1);
		}

		printf("%d\n", sum);
	}

	return 0;
}