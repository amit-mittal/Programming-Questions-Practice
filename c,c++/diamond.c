#include <stdio.h>

float recur(float a[],int start,int end,float b[][1003]){
	if(end==0)
		return a[0];

	if(end-start==1){
		if(b[start][end/2]==0.0)
			b[start][end/2]=(a[start]+a[end])/2;

		return b[start][end/2];
	}
	else if(end-start==2){
		if(b[start][end/2]==0.0)
			b[start][end/2]=(float)(3*(a[start]+a[end])+2*(a[start+1]))/4;

		return b[start][end/2];
	}
	else{
		float ans;

		if(b[start][end/2]==0.0){
			if(b[start+2][end/2]==0.0)
				b[start+2][end/2]=recur(a,start+2,end,b);

			if(b[start][(end-2)/2]==0.0)
				b[start][(end-2)/2]=recur(a,start,end-2,b);

			b[start][end/2]=(float)((a[start]+(b[start+2][end/2]))+(a[end]+(b[start][(end-2)/2])))/2;
		}
		
		return b[start][end/2];
	}
}

int main(){
	int test,n,i,j,start,end;
	float ans,a[2003];

	scanf("%d",&test);

	while(test--){
		float b[2003][1003]={0};

		scanf("%d",&n);

		for(i=0;i<n;++i){
			scanf("%f",&a[i]);
		}

		ans=recur(a,0,n-1,b);

		printf("%.3f\n",ans);
	}

	return 0;
}