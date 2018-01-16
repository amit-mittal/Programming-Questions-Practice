#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int v[7];
int size = 0;

void solve(int arr[], int y){
	for(int i=6;i>=0;--i){
		if(y==0)
			break;

		if(y>=arr[i]){
			v[size++] = arr[i];
			y = y- arr[i];
		}
	}
}

int main(){
	int x, y, sum = 0;
	int arr[10];
	char x1[15], y1[15];

	scanf("%s", x1);
	scanf("%s", y1);
	x = atoi(x1);
	y = atoi(y1);

	if(x<=0 || y<=0 || x>100 || y>100){
		printf("Invalid Input\n");
		return 0;
	}

	bool ans = true;

	if(x>50)
		ans = false;

	int counter = 0;
	while(counter<7){
		int next = sum+1;
		sum+=next;
		if(sum<x){
			arr[counter] = next;
			++counter;
		} else {
			sum = sum-next;
			arr[counter] = x - sum - 1;
			sum = sum + arr[counter];
			if(arr[counter] != 0)
				++counter;
			arr[counter] = x;
			sum = sum + arr[counter];
			++counter;
			break;
		}
	}

	while(counter<7){
		int next = sum+1;
		arr[counter] = next;
		sum+=next;
		++counter;
	}

	int temp = 0;
	for(int i=0;i<7;++i){
		temp+=arr[i];
	}
	
	int less = 100 - temp;
	for(int i=6;i>=0;--i){
		if(arr[i]!=x){
			arr[i]+=less;
			break;
		}
	}

	for(int i=0;i<7;++i){
		if(arr[i]>50)
			ans = false;
	}
	
	if(ans){
		solve(arr, y);

		sort(arr,arr+7);
		for(int i=0;i<7;++i)
			printf("%d ", arr[i]);
		printf("\n");

		sort(v,v+size);
		for(int i=0;i<size;++i)
			printf("%d ", v[i]);
		printf("\n");
	} else {
		printf("Invalid Input\n");
	}

	return 0;
}