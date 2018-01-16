#include <iostream>
#include <cstdio>

using namespace std;

void hanoi(int from, int to, int help, int size){
	if(size==1){
		printf("from: %d to: %d\n", from, to);
		return;
	}

	hanoi(from, help, to, size-1);
	printf("from: %d to: %d\n", from, to);
	hanoi(help, to, from, size-1);
}

int main(){
	int n;
	scanf("%d",&n);

	hanoi(1, 3, 2, n);
	
	return 0;
}