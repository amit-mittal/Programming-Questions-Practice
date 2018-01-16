#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

void sort(int x[],int y[],int n){
	int i,j;

	for(i=0;i<n-1;++i){
		for(j=i+1;j<n;++j){
			if(x[j]<x[i]){
				swap(x[j],x[i]);
				swap(y[j],y[i]);
			}
		}
	}
}

int main(){
	int s,n,ans=1,i,j,x[10005],y[10005];

	scanf("%d %d",&s,&n);

	for(i=0;i<n;++i)
		scanf("%d %d",&x[i],&y[i]);

	sort(x,y,n);

	for(i=0;i<n;++i){
		if(x[i]<s){
			s+=y[i];
			ans=1;
		}
		else{
			ans=0;
			break;
		}
	}

	if(ans==1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}