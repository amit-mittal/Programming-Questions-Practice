#include<stdio.h>
#include<math.h>
	 
int main(){
	long long int n,w,a[400005]={0},ans=0,i,j,b[400005]={0},val,check;

	scanf("%lld %lld",&n,&w);
	 
	for(i=0;i<n;++i){
		scanf("%lld",&a[i]);

		b[0]=a[0];
		if(i>0)
			b[i]=b[i-1]+a[i];
	}

	val=w*(w-1)/2;
/*
	for(i=0;i<n;++i)
		printf("%d ",b[i]);

	printf("\n");
*/
	if((b[w-1]-val)>0 && (b[w-1]-val)%w==0)
		++ans;

	for(i=w;i<n;++i){
		check=b[i]-b[i-w]-val;

		if(check>0 && check%w==0)
			++ans;
	}
	 
	printf("%lld\n",ans);
	 
	return 0;
}