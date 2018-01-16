#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

void maxHeapify(int arr[], int v, int size){
	int largest = v;
	while(v<=size){
		if(2*v<=size && arr[2*v]>arr[largest]){
			largest = 2*v;
		}

		if(2*v+1<=size && arr[2*v+1]>arr[largest]){
			largest = 2*v+1;
		}

		if(largest == v)
			break;
		else{
			swap(arr[v], arr[largest]);
			v = largest;
		}
	}
}

void makeHeap(int arr[], int size){
	for(int i=size/2;i>=1;--i){
		maxHeapify(arr, i, size);
	}
}

int extractMax(int arr[]){
	return arr[1];
}

void heapSort(int arr[], int size){
	while(size>0){
		int val = extractMax(arr);
		printf("%d ", val);
		swap(arr[1], arr[size]);
		--size;
		maxHeapify(arr, 1, size);
	}
}

int main(){
	int arr[] = {0, 2, 8, 1, 9, 7, 5, 4, 6};
	makeHeap(arr, 8);

	for(int i=1;i<=8;++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
	heapSort(arr, 8);

	return 0;
}