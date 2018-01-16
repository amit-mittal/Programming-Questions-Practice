#include <stdio.h>

int main(){
	int test,n,m,i,j,ans,c,l;

	scanf("%d",&test);

	while(test--){
		ans=0;
		int a[102]={0},b[102]={0};

		scanf("%d %d",&n,&m);

		for(i=0;i<n;++i){
			scanf("%d %d",&c,&l);
			a[l]+=c;
		}

		for(i=0;i<m;++i){
			scanf("%d %d",&c,&l);
			b[l]+=c;
		}

		for(i=1;i<=100;++i){
			if(a[i]<b[i])
				ans+=(b[i]-a[i]);
		}

		printf("%d\n",ans);
	}

	return 0;
}