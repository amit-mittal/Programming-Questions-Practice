#include <iostream>
#include <cstdio>

#define MAX 1000

using namespace std;

void mergesort(int a[], int size){
	if(size<=1){
		return;
	}
	else{
		int b[5], c[5], i, j, k, end_b, end_c;
		int mid = size/2;

		for(i=0;i<mid;++i){
			b[i] = a[i];
		}
		b[i++]=MAX;
		end_b = i;

		for(i=mid;i<size;++i){
			c[i-mid] = a[i];
		}
		c[i-mid]=MAX;
		end_c = i-mid+1;

		mergesort(b, end_b-1);
		mergesort(c, end_c-1);

		i=0,j=0,k=0;
		while(i<end_b || j<end_c){
			if(b[i]<=c[j]){
				a[k] = b[i];
				++i;
			}
			else{
				a[k] = c[j];
				++j;
			}
			++k;

			if(k==size)
				break;
		}
	}
}

int main(){
	int i, a[10], n=4;

	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}

	mergesort(a, n);

	for(i=0;i<n;++i){
		printf("%d\n",a[i]);
	}
	
	return 0;
}