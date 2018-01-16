#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

void heapify(int a[], int index, int n){
	if(index == 1){
		return;
	}

	if(a[index]>a[index/2]){
		swap(a[index/2], a[index]);
	}

	heapify(a, index/2, n);
}

void heap(int a[], int n){
	for(int i=2;i<=n;++i){
		heapify(a, i, n);
	}
}

void maxHeapify(int a[], int i, int n){
	int largest = i;
	if(2*i<=n && a[2*i]>a[i])
		largest = 2*i;

	if((2*i+1)<=n && a[(2*i+1)]>a[largest])
		largest = 2*i + 1;

	if(i != largest){
		swap(a[i], a[largest]);
		maxHeapify(a, largest, n);
	}
}

void maxHeap(int a[], int n){
	for(int i = n/2 ; i>=1 ; --i){
		maxHeapify(a, i, n);
	}
}

void printHeap(int a[], int n){
	for(int i=n;i>=1;){
		printf("%d\n", a[1]);
		swap(a[1], a[i]);
		--i;
		maxHeapify(a, i, i);
	}
}

int main(){
	int i, a[10], n=5;

	for(i=1;i<=n;++i){
		scanf("%d",&a[i]);
	}

	heap(a, n);
//	maxHeap(a, n);

	printHeap(a, n);

/*	printf("\n");
	for(i=1;i<=n;++i){
		printf("%d\n",a[i]);
	}

	printf("\n");*/
//	makeHeap(a, n);

	return 0;
}