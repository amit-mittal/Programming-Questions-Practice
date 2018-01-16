#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

void qsort(int a[], int start, int end){
	if(end-start<=0)
		return;
	int i, pivot = end;
	int back = end-1;
	for(i=start;i<=back;){
		if(a[i]>a[pivot]){
			swap(a[i], a[back]);
			--back;
		}
		else{
			++i;
		}
	}
	swap(a[i], a[pivot]);
	qsort(a, start, i-1);
	qsort(a, i+1, end);
}

int main(){
	int arr[]={8,1,6,2,4,0,3,5}, size = 8, i, j;

	for(i=0;i<size;++i)
		printf("%d ", arr[i]);
	printf("\n");

	qsort(arr, 0, size-1);

	for(i=0;i<size;++i)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}