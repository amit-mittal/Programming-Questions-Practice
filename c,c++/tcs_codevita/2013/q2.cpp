#include <iostream>
#include <cstdio>
#include <limits.h>

using namespace std;

#define s(n) scanf("%d",&n);

int main(){
	int n,k,l;
	int a[1005], b[1005];
	int c[1005];
	int d[1005];
	
	s(n);s(k);s(l);
	for(int i=0;i<k;++i){
		s(a[i]);
	}
	for(int i=0;i<k;++i){
		s(b[i]);
	}
	
	for(int i=1;i<=n;++i){
		c[i] = INT_MAX;
		d[i] = 0;
	}
	
	c[0]=0;
	for(int i=0;i<k;++i){
		for(int j=1;j<=n;++j){
			if(j>=a[i])
				c[j] = min(c[j],b[i] + c[j-a[i]]);
		}
	}
	
	d[0]=0;
	for(int i=0;i<k;++i){
		for(int j=1;j<=n;++j){
			if(j>=a[i])
				d[j] = max(d[j],b[i] + d[j-a[i]]);
		}
	}
/*	
	for(int i=0;i<=n;++i){
		printf("%d ",c[i]);
	}
	printf("\n");
	
	for(int i=0;i<=n;++i){
		printf("%d ",d[i]);
	}
	printf("\n");
*/	
	if(l<c[n])
		printf("Urgently Call Bob!!!\n");
	else
		printf("%d\n", d[n]-c[n]);
		
	return 0;
}
