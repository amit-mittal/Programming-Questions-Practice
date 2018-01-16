#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

int n,a[100005];

int main(){
	int i,j,k,ans=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	
	if(n>130)
		ans=1;
	
	if(n<=130)
		sort(a,a+n);
	
	for(i=0;i<n && ans==0;++i){
		for(j=i+1;j<n && ans==0;++j){
			for(k=j+1;k<n && ans==0;++k){
				if(binary_search(a+k,a+n-1,a[i]^a[j]^a[k])==true)
				{
					ans=1;
					break;
				}
			}
		}
	}
	
	if(ans==1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
