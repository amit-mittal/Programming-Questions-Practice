#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int test, n, index;
	double a, b, c, l[10005], val, i, j, k;

	scanf("%d", &test);

	while(test--){
		scanf("%d",&n);
		scanf("%lf %lf %lf",&a,&b,&c);

		for(index=0;index<n;++index){
			scanf("%lf",&l[index]);
			l[index]*=pow(10,8);
		}
		printf("%lf %lf %lf\n", a, b, c);
		a*=pow(10,8);
		b*=pow(10,8);
		c*=pow(10,8);

		for(i=-1.0;i<=1.0;i+=2.0){
			for(j=-1.0;j<=1.0;j+=2.0){
				for(k=-1.0;k<=1.0;k+=2.0){
					val = (double)((double)(i*a) + (double)(j*b) + (double)(k*c));
					printf("%lf\n", val);
				}
			}
		}
	}

	return 0;
}