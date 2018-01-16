#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

void print(int arr[], int start, int end){
	printf("s=%d e=%d:", start, end);
	for (int i = start; i <= end; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

void quicksort(int arr[], int start, int end){
	if(end<=start)
		return;

	int j = start;
	int i = start;
	int pivot = arr[end];
	while(i<=end){
		if(arr[i]<pivot){
			swap(arr[i], arr[j]);
			++j;
		}
		++i;
	}
	swap(arr[end], arr[j]);
	quicksort(arr, start, j-1);
	quicksort(arr, j+1, end);
}

int main(){
	int arr[] = {8, 10, 2, 5, 11, 1, -6, 3};
	int n = sizeof(arr)/sizeof(int);

	print(arr, 0, n-1);
	quicksort(arr, 0, n-1);
	print(arr, 0, n-1);

	return 0;
}