#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int a[1000005];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	int max_start = 0;
	int max_end = 0;
	int start = 0;
	int end = 0;
	int prev = a[0];
	for(int i=0;i<n;++i){
		if(a[i]>=prev){
			prev = a[i];
			end = i;
		}else{
			if(end-start>max_end-max_start){
				max_start = start;
				max_end = end;
			}
			start = i;
			end = i;
			prev = a[i];
		}
	}
	if(end-start>max_end-max_start){
		max_start = start;
		max_end = end;
	}
	
	for(int i=max_start;i<=max_end;++i){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}
