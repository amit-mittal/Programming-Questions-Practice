#include <iostream>
#include <cstdio>
#include <stdlib.h>

#define MAX 1000000009
#define LIM 10001

using namespace std;

/*
int func(int a[][2], int w, int i, int value){
	int ans, amount;

	if(w==0)
		return value;

	if(i<0 || w<0)
		return MAX;

	amount = w/a[i][1];

	ans = min( func(a, w, i-1, value), func(a, w - (amount*a[i][1]), i-1, value + (amount*a[i][0])) );

	return ans;
}
*/

int main(){
	int test,i,a[502][2],n,e,h,ans,amount,w;
	int **b;
//	int b[501][LIM];

	scanf("%d",&test);

	while(test--){
		scanf("%d %d",&e,&h);

		scanf("%d",&n);

		b=(int **)malloc((n+1)*sizeof(int*));

		if(h-e>=0){
			for(i=0;i<=n;++i)
				b[i]=(int *)malloc((h-e+1)*sizeof(int));
		}

		for(i=1;i<=n;++i){
			scanf("%d %d",&a[i][0], &a[i][1]);
		}

		for(i=0;i<=h-e;++i)
			b[0][i]=MAX;

		for(i=0;i<=n;++i)
			b[i][0]=0;

		for(i=1;i<=n;++i){
			for(w=0;w<=h-e;++w){
				if((a[i][1])<=w)
					b[i][w]=min(b[i-1][w], a[i][0] + b[i][w-a[i][1]]);
				else
					b[i][w]=b[i-1][w];
			}
		}

		if(b[n][h-e]<MAX && h-e>=0)
			printf("The minimum amount of money in the piggy-bank is %d.\n", b[n][h-e]);
		else
			printf("This is impossible.\n");

		for(i=0;i<=n;++i)
			free(b[i]);

		free(b);

/*
		if(h-e>0)
			ans = func(a, h-e, n-1, 0);
		else
			ans=MAX;

		if(ans==MAX)
			printf("This is impossible.\n");
		else
			printf("The minimum amount of money in the piggy-bank is %d.\n", ans);
*/	}

	return 0;
}