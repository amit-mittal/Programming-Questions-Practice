#include <stdio.h>
#include <iostream>

using namespace std;

void func(int a[][1005], int s, int n, int visit[]){
	if(visit[s]==1)
		return;

	visit[s]=1;
	for(int i=1;i<=n;++i){
		if(a[s][i]==1){
			func(a,i,n,visit);
		}
	}
}

int main(){
	int test, n, s, f, i, a[1005][1005],x,y,j;

	scanf("%d",&test);

	while(test--){
		int count = 0;
		scanf("%d%d%d",&n,&s,&f);

		for(i=0;i<n;++i)
			for(j=0;j<n;++j)
				a[i][j]=0;

		for(i=0;i<f;++i){
			scanf("%d %d",&x,&y);
			a[x][y]=1;
			a[y][x]=1;
		}

		int ans = -1;
		for(i=1;i<=n;++i){
			int visit[1005]={0};
//			cout<<i<<endl;
			func(a, i, n, visit);

			count=0;
			for(j=1;j<=n;++j){
				if(visit[j]==1){
					++count;
				}
				if(visit[s]==1){
					count =0;
					break;
				}
			}

			ans = max(count, ans);
		}

		printf("%d\n", ans);
	}

	return 0;
}