#include <stdio.h>
#include <math.h>

int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main(){
	int n,i,j,k;
	long long int count=0;
	scanf("%d",&n);

	for(i=3;i<=n;++i){
		for(j=(int)ceil(i/3)+1;j<=i/2;++j){
			if(j==i/2){
				if(i&1)
					++count;
				break;
			}

			if(gcd(i,j)==1)
				++count;
		}
	}

	printf("%lld\n",count);

	return 0;
}