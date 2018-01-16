#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int makePartition(int a[], int start, int end){
	int counter = end-1;

	int i=start;
	while(i<counter){
		if(a[i]<=a[end-1]){
			++i;
		}
		else{
			--counter;
			swap(a[i], a[counter]);
		}
	}
	swap(a[i], a[end-1]);

	return i;
}

void quicksort(int a[], int start, int end){
	if(end-start<=1)
		return;

	int temp = makePartition(a, start, end);

	quicksort(a, start, temp);
	quicksort(a, temp+1, end);
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