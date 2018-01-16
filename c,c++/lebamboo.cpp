#include <iostream>
#include <cstdio>

using namespace std;

int pos(int val){
	if(val<0)
		return (-val);
	return val;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		int a[55], b[55];
		scanf("%d", &n);
		for(int i=0;i<n;++i){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;++i){
			scanf("%d", &b[i]);
		}
		
		if(n==1){
			if(b[0]<=a[0])
				printf("%d\n", a[0]-b[0]);
			else
				printf("-1\n");
		} else if(n==2){
			if((a[0]+a[1])==(b[0]+b[1])){
				printf("%d\n", pos(a[0]-b[0]));
			} else {
				printf("-1\n");
			}
		} else {
			int sum1 = 0;int sum2 = 0;
			for(int i=0;i<n;++i){
				sum1+=a[i];
				sum2+=b[i];
			}
			
			if(sum2-sum1<0){
				printf("-1\n");
			} else {
				if((sum2-sum1)%(n-2)==0){
					int val = (sum2-sum1)/(n-2);
					bool ans = true;
					for(int i=0;i<n;++i){
						int v = val-b[i]+a[i];
						if(v<0 || v%2!=0){
							ans = false;
							break;
						}
					}
					if(ans)
						printf("%d\n", val);
					else
						printf("-1\n");
				} else {
					printf("-1\n");
				}
			}
		}
	}
	return 0;
}