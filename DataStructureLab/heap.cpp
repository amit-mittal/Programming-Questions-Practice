#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct node{
	int data;
	int key;
};

int parent(int x){
	return x/2;
}

int leftchild(int x){
	return(2*x);
}

int rightchild(int x){
	return(2*x+1);
}

void maxHeapify(int a[], int index, int size){
	int largest = -1;
	while(largest!=index && index>=1 && index<=size){
		largest = index;
		if(leftchild(index)<=size){
			if(a[leftchild(index)]>a[index]){
				largest = leftchild(index);
			}
		}

		if(rightchild(index)<=size){
			if(a[rightchild(index)]>a[largest]){
				largest = rightchild(index);
			}
		}

		swap(a[index], a[largest]);

		if(largest == index)
			break;
		index = largest;
		largest = -1;
	}
}

void makeHeap(int arr[], int size){
	for(int i=size/2;i>0;--i){
		maxHeapify(arr, i, size);
	}
}

void heapSort(int a[], int size){
	makeHeap(a, size);
	int temp_size = size;
	printf("The sorted array is: \n");
	for(int i=1;i<=size;++i){
		printf("%d ", a[1]);
		swap(a[1], a[temp_size]);
		temp_size--;
		maxHeapify(a, 1, temp_size);
	}
	printf("\n");
}

int main(){
	int arr[] = {-1, 8, 4, 1, 10, 7, 2, 5}, size = 7, i, j;

	for(i=1;i<=size;++i)
		printf("%d ", arr[i]);
	printf("\n");

	makeHeap(arr, size);

	for(i=1;i<=size;++i)
		printf("%d ", arr[i]);
	printf("\n");

	heapSort(arr, size);

	for(i=1;i<=size;++i)
		printf("%d ", arr[i]);
	printf("\n");

	struct node *n = new node[10];
	for(i=0;i<10;++i){
		n[i].data = i;
		n[i].key = i;
	}

	for(i=0;i<10;++i){
		printf("%d %d\n", n[i].data, n[i].key);
	}

	return 0;
}