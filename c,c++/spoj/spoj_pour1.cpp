#include <iostream>
#include <cstdio>
//this is wrong algo
using namespace std;

int main(){
	int test, a, b, sum, ans, count, ans1, ans2, amount;

	scanf("%d", &test);

	while(test--){
		scanf("%d %d %d", &a, &b, &sum);

		if(sum>max(a,b)){
			ans = -1;
		}
		else if(sum==a || sum==b){
			ans = 1;
		}
		else if(!sum){
			ans = 0;
		}
		else{
			if(sum<min(a,b)){
				count = 1;
				amount = max(a,b);

				while(1){
					amount-=min(a,b);
					++count;

					if(amount==sum){
						ans = count;
						break;
					}
					else if(amount<sum){
						ans=-1;
						break;
					}
				}
			}
			else if(sum>min(a,b)){
				if(sum%min(a,b)==0){
					ans1 = sum/min(a,b);
				}
				else{
					ans1 = -1;
				}

				count = 1;
				amount = max(a,b);

				while(1){
					amount-=min(a,b);
					++count;

					if(amount==sum){
						ans2 = count;
						break;
					}
					else if(amount<sum){
						ans2=-1;
						break;
					}
				}

				if(ans1>0 && ans2>0){
					ans = min(ans1, ans2);
				}
				else{
					ans = max(ans1, ans2);
				}
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}