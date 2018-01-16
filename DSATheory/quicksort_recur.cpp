#include <iostream>
#include <cstdio>

using namespace std;

void quicksort(int a[], int start, int end){
	int b[10], c[10], i, k=0, l=0;

	if(end-start<=1)
		return;

	for(i=start+1;i<end-start;++i){
		if(a[i]<=a[0]){
			b[k]=a[i];
			++k;
		}
		else{
			c[l]=a[i];
			++l;
		}
	}

	quicksort(b, 0, k);
	quicksort(c, 0, l);

	int temp = a[start];
	for(i=0;i<k;++i)
		a[start+i]=b[i];

	a[start+k]=temp;

	for(i=0;i<l;++i)
		a[start+i+k+1]=c[i];
}

int main(){
	int i, a[10], n=5;

	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}

	quicksort(a, 0, n);

	printf("\n");
	for(i=0;i<n;++i){
		printf("%d\n",a[i]);
	}
	return 0;
}