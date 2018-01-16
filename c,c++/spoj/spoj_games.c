#include <stdio.h>
#include <math.h>

int main(){
	int test;
	double g, intpart, f;
	int n;

	scanf("%d",&test);
	while(test--){
		//it can be an integer also
		scanf("%lf",&g);
		f = modf(g, &intpart);

		f = (double)f*100000.00;
		int r = (int)f;
		printf("%d\n", r);
		while(r%10==0)
			r/=10;
		printf("%d\n", r);
		int val = r;
		int count = 0;
		while(val>0){
			val/=10;
			++count;
		}

		int count_2 = 0, count_5 = 0;
		val = r;
		while(val%2==0){
			val/=2;
			++count_2;
		}
		while(val%5==0){
			val/=5;
			++count_5;
		}
		
		int ans = pow(10, count);
		if(count_2>0){
			int ans1 = pow(5, count_2);
			if(count_2<count){
				ans1 = ans1*pow(10, count-count_2);
			}
			if(ans1<ans)
				ans = ans1;
		} else if(count_5>0){
			int ans1 = pow(2, count_5);
			if(count_5<count){
				ans1 = ans1*pow(10, count-count_5);
			}
			if(ans1<ans)
				ans = ans1;

		}

		printf("%d\n", ans);
	}

	return 0;
}
