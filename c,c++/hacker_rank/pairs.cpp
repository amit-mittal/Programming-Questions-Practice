#include <iostream>
#include <algorithm>

using namespace std;

int a[100005];
bool binary(int start, int end, int val){
	while(end>=start){
		int mid = start+((end-start)/2);
		if(a[mid] == val){
			return true;
		} else if(val>a[mid]){
			start = mid+1;
		} else {
			end = mid-1;
		}
	}
	return false;
}

void heapify(int index, int n){
	int largest = index;
	while(index<n){
		if((2*index+1)<n && a[(2*index)+1]>a[largest])
			largest = (2*index)+1;
		
		if((2*index+2)<n && a[(2*index)+2]>a[largest])
			largest = (2*index)+2;
		
		if(largest==index)
			break;
		swap(a[largest], a[index]);
		index = largest;
	}
}

void makeHeap(int n){
	for(int i = n/2;i>=0;--i){
		heapify(i, n);
	}
}

void heapSort(int n){
	makeHeap(n);
	for(int i=0;i<n;++i){
		swap(a[0], a[n-i-1]);
		heapify(0, n-i-1);
	}
}

int main(){
	int n, k;
	
	cin>>n>>k;

	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	heapSort(n);

	int count = 0;
	for(int i=0;i<n-1;++i){
		bool ans = binary(i, n-1, a[i]+k);
		if(ans)
			++count;
	}

	cout<<count<<endl;

	return 0;
}
