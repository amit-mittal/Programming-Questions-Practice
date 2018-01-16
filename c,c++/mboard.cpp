#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int n, q, i, a[500005], b[500005], row, col, e, val, ans;
	char str[10];

	scanf("%d %d",&n,&q);

	row=n;//no. of zero rows
	col=n;//no. of zero cols
	for(i=0;i<n;++i){
		a[i]=0;//for rows
		b[i]=0;//for cols
	}

	while(q--){		
		scanf("%s",str);
		printf("%s\n", str);
		
		if(str[strlen(str)-1]=='t'){
			scanf("%d %d", &e, &val);
			
			if(str[0]=='R'){
				if(val==0){
					if(a[e-1]!=0){
						++row;
						a[e-1]=0;
					}
				}else{
					if(a[e-1]==0){
						--row;
						a[e-1]=1;
					}
				}
			}else{
				if(val==0){
					if(b[e-1]!=0){
						++col;
						b[e-1]=0;
					}
				}else{
					if(b[e-1]==0){
						--col;
						b[e-1]=1;
					}
				}
			}
		}
		else{
			scanf("%d", &e);
			
			if(str[0]=='R'){
				if(a[e-1]==0){
					ans=n;
					ans-=(n-col);
				}
				else{
					ans=0;
					ans+=col;
				}
			}else{
				if(b[e-1]==0){
					ans=n;
					ans-=(n-row);
				}
				else{
					ans=0;
					ans+=row;
				}
			}
			for(i=0;i<n;++i)
				printf("%d ",a[i]);
			printf("\n");
			for(i=0;i<n;++i)
				printf("%d ",b[i]);
			printf("\n");
			printf("row=%d col=%d\n", row, col);
			printf("%d\n", ans);
		}
	}

	return 0;
}