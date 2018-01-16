#include "stdafx.h"
#include <iostream>
#include <cstdio>

using namespace std;

#define MAX 8

//Indexing of BIT starts from 1 and NOT 0
int bit[MAX];
int maxVal = MAX-1;

void update(int idx, int data){
	while(idx<=maxVal){
		bit[idx] += data;
		idx += (idx & -idx);
	}
}

int read(int idx){
	int res = 0;
	while(idx>0){
		res += bit[idx];
		idx -= (idx & -idx);
	}
	return res;
}

void printList(){
	for(int i=0;i<MAX;++i){
		printf("%d ", bit[i]);
	}
	printf("\n");
}

int main(int argc, _TCHAR* argv[])
{
	update(2, 10);
	update(5, 20);
	update(1, 5);
	printf("%d\n", read(2));
	return 0;
}