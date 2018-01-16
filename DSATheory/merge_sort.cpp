#include <iostream>
#include <cstdio>

using namespace std;

void print(int arr[], int start, int end){
	printf("s=%d e=%d:", start, end);
	for (int i = start; i <= end; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

void merge(int arr[], int start, int mid, int end){
	int a[100];

	print(arr, start, mid);
	print(arr, mid+1, end);

	int k = start;
	int s1 = start;int s2 = mid+1;
	while(s1<=mid && s2<=end){
		if(arr[s1]<=arr[s2]){
			a[k] = arr[s1];
			++s1;
		} else {
			a[k] = arr[s2];
			++s2;
		}
		++k;
	}

	while(s1<=mid){
		a[k] = arr[s1];
		++s1;
		++k;
	}

	while(s2<=end){
		a[k] = arr[s2];
		++s2;
		++k;
	}

	for(int i=start;i<=end;++i)
		arr[i] = a[i];

	print(arr, start, mid);
	print(arr, mid+1, end);
}

void mergesort(int arr[], int start, int end){
	if(end<=start)
		return;
	
	int mid = start + (int)((end-start)/2);

	mergesort(arr, start, mid);
	mergesort(arr, mid+1, end);
	merge(arr, start, mid, end);
}

int main(){
	int arr[] = {8, 10, 2, 5, 11, 1, -6, 3};
	int n = sizeof(arr)/sizeof(int);

	print(arr, 0, n-1);
	mergesort(arr, 0, n-1);
	print(arr, 0, n-1);

	return 0;
}