#include <stdio.h>

int main(){
	int a[13]={3,67,34,222,45,75,54,34,44,33,22,11,66}, i;
	int max=a[0];
	
	for(i=0;i<13;++i){
		if(a[i]>max)
			max = a[i];
	}
}
