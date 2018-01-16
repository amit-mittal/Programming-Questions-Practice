#include <stdio.h>

int main(){
	int t, n, b[101][501], a[101][2], i, j, ans;

	scanf("%d %d", &t, &n);

	while(t!=0 || n!=0){
		for(i=1;i<=n;++i)
			scanf("%d %d",&a[i][0], &a[i][1]);

		for(i=0;i<=t;++i)
			b[0][i]=0;

		for(i=0;i<=n;++i)
			b[i][0]=0;

		for(i=1;i<=n;++i){
			for(j=0;j<=t;++j){
				if(j>=a[i][0]){
					if(b[i-1][j]>=a[i][1] + b[i-1][j-a[i][0]])
						b[i][j]=b[i-1][j];
					else
						b[i][j]=a[i][1] + b[i-1][j-a[i][0]];
				}
				else
					b[i][j]=b[i-1][j];
			}
		}

		for(i=0;i<=t;++i){
			if(b[n][i]==b[n][t]){
				ans = i;
				break;
			}
		}

		printf("%d %d\n", ans, b[n][t]);

		scanf("%d %d", &t, &n);
	}

	return 0;
}