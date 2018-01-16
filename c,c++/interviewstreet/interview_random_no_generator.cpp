#include <iostream>
#include <stdio.h>

using namespace std;

long long int gcd(long long int a,long long int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main(){
	int test,a,b,c,val1,val2;
	long long int num,den,hcf;

	scanf("%d",&test);

	while(test--){
		scanf("%d %d %d",&a,&b,&c);

		val1=min(a,b);
		val2=max(a,b);

		den=val1*val2;

		if(c<=val1){
			num=c*c;
			den*=2;
		}
		else if(c>val1 && c<=val2){
			num=((2*c)-val1)*val1;
			den*=2;
		}
		else if(c>val2 && c<val1+val2){
			num=(2*(c-val2)*val2)+((val1+val2-c)*(val2+c-val1));
			den*=2;
		}
		else{
			num=val1*val2;
		}

		hcf=gcd(den,num);

		num=num/hcf;
		den=den/hcf;

//		printf("%lld\n", gcd(den,num));

		printf("%lld/%lld\n",num,den);
	}

	return 0;
}