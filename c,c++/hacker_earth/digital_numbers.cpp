//Author: ??
#include <cstdio>
#include <iostream>

using namespace std;

#define ll long long

int b[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int c[][6] = {{7, 6, 5, 4, 3, 2}, {1, 3, 3, 1, 1, 1}};
int n, l;
int ans;

int fact(int n){
	int pro = 1;
	while(n>0){
		pro=pro*n;
		n--;
	}
	return pro;
}

void recur(int loop, int val, int temp[]){
	if(loop==6){
		int sum=0;
		for(int i=0;i<6;++i)
			sum+=temp[i];
		
		if(sum>l)
			return;

		if(val>0 && val<=n){
			int t=1;
			if(temp[1]==1 || temp[1]==2){
				t*=3;
			}

			if(temp[2]==1 || temp[2]==2){
				t*=3;
			}
			t*=fact(sum);
			ans+=t;
			for (int i = 0; i < 6; ++i){
				printf("%d ", temp[i]);
			}
			printf("\n");
		}
		return;
	}

	for(int i=0;i<=c[1][loop];++i){
		temp[loop] = i;
		recur(loop+1, val+(i*c[0][loop]), temp);
	}
}

int main() {
	int test, t;
	scanf("%d",&test);
	while(test--){
		ans = 0;
		scanf("%d %d", &l, &t);
		n = t/7;

		int temp[6]={0};
		recur(0, 0, temp);
		printf("%d\n", ans);
	}
	return 0;
}
