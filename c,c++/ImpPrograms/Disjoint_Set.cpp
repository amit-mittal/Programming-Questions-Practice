#include "stdafx.h"
#include <iostream>
#include <cstdio>

using namespace std;

#define MAX 8

//If data can be more than limit of array then, make a map with mapping, value=>index
//Also instead of node, can do by 2 arrays of parent and rank
struct node{
	int data;
	int rank;
	int parent;
};

struct node list[MAX];

int findParent(int set){
	while(list[set].parent!=list[set].data){
		set = list[set].parent;
	}
	return set;
}

void unionSet(int s1, int s2){
	int p1 = findParent(s1);
	int p2 = findParent(s2);

	if(p1==p2)
		return;

	if(list[p1].rank>list[p2].rank){
		list[p2].parent = p1;	
	} else if(list[p1].rank<list[p2].rank){
		list[p1].parent = p2;
	} else {
		list[p1].parent = p2;
		list[p2].rank++;
	}
}

void printList(){
	for(int i=0;i<MAX;++i){
		printf("Index=%d Data=%d Parent=%d Rank=%d\n", i, list[i].data, list[i].parent, list[i].rank);
	}
	printf("\n");
}

int main(int argc, _TCHAR* argv[])
{	
	for(int i=0;i<MAX;++i){
		list[i].data = i;
		list[i].rank = 0;
		list[i].parent = i;
	}

	printList();
	unionSet(2, 5);
	printList();

	unionSet(1, 4);
	unionSet(4, 5);
	printList();

	return 0;
}