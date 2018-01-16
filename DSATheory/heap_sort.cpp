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

void heapify(int a[], int index, int n){
	int largest = index;
	while(largest<n){
		index = largest;
		if(2*index<n && a[2*index]>a[largest]){
			largest = 2*index;
		}
		if(((2*index)+1)<n && a[((2*index)+1)]>a[largest]){
			largest = ((2*index)+1);
		}

		if(largest == index)
			break;
		else
			swap(a[index], a[largest]);
	}
}

void makeHeap(int arr[], int n){
	for(int i = n/2;i>0;--i){
		heapify(arr, i, n);
	}
}

void heapSort(int arr[], int n){
	while(n>1){
		printf("%d ", arr[1]);
		swap(arr[1], arr[n-1]);
		n--;
		heapify(arr, 1, n);
	}
	printf("\n");
}

int main(){
	int arr[] = {0, 8, 10, 2, 5, 11, 1, -6, 3};
	int n = sizeof(arr)/sizeof(int);

	print(arr, 0, n-1);
	makeHeap(arr, n);
	print(arr, 0, n-1);
	heapSort(arr, n);

	return 0;
}