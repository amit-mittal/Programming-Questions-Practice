#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int median_index(int a[], int start, int end){
	sort(a+start, a+end+1);
	return ((start+end)/2);
}

int best_pivot(int a[], int start, int end){
	if(end-start<5){
		return median_index(a, start, end);
	}
	else{
		int j=-1;
		int b[100];
		for(int i=start; i<=end; i+=5){
			++j;
			b[j] = a[median_index(a, i, min(i+4, end))];
		}
		return best_pivot(b, 0, j);
	}
}

int func(int a[], int start, int end, int n){
	if(end-start==0)
		return a[end];
	if(end-start<0)
		return -1;

//	int pivot = end;
	int pivot = best_pivot(a, start, end);
	swap(a[pivot], a[end]);
	pivot = end;
	int back = end-1;
	int front;

	for(front = start;front<=back;){
		if(a[front]<=a[pivot]){
			++front;
		}
		else{
			swap(a[back], a[front]);
			--back;
		}
	}

	swap(a[front], a[pivot]);

	if(n==front+1)
		return a[front];
	else if(n>front+1)
		return func(a, front+1, end, n);
	else if(n<front+1)
		return func(a, start, front-1, n);
}

int main(){
	int arr[]={8,1,6,2,4,0,3,5}, size = 8, i, j;

	for(i=0;i<size;++i)
		printf("%d ", arr[i]);
	printf("\n");

	scanf("%d",&j);//jth largest

	int ans = func(arr, 0, size-1, j);
	printf("j'th largest = %d\n", ans);

	return 0;
}