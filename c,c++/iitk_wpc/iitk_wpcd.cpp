#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

bool check(double a, double b, double c){
	if(a<b+c && b<a+c && c<a+b)
		return true;
	else
		return false;
}

double area(double a, double b, double c){
	if(!check(a, b, c)){
		return 0.0;
	}
	double s = (a+b+c)/2.0;
	double ans = sqrt(abs(s*(s-a)*(s-b)*(s-c)));
	return ans;
}

int main(){
	int test, n;
	
	scanf("%d", &test);
	while(test--){
		double a[16];
		double dp[100000]={0.0};

		scanf("%d",&n);
		for(int i=0;i<n;++i){
			scanf("%lf", &a[i]);
		}
		
		int max_mask = 1<<n;
		for(int i=1;i<max_mask;++i){
			for(int x=0;x<n;++x){
				if(i&(1<<x)!=0){//x bit set
					for(int y=x+1;y<n;++y){
						if(i&(1<<y)!=0){//y bit set
							for(int z=y+1;z<n;++z){
								if(i&(1<<z)!=0){//z bit set
									int val = (1<<x);
									val = val|(1<<y);
									val = val|(1<<z);
									dp[i] = max(dp[i], area(a[x], a[y], a[z]) + dp[i&(!val)]);
								}
							}
						}
					}
				}
			}
		}
		
		printf("%.6lf\n", dp[max_mask-1]);
	}
	return 0;
}
