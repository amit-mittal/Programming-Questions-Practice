/**
 * In this code we have a very large array called arr, and very large set of operations
 * Operation #1: Increment the elements within range [i, j] with value val
 * Operation #2: Get max element within range [i, j]
 * Build tree: build_tree(1, 0, N-1)
 * Update tree: update_tree(1, 0, N-1, i, j, value)
 * Query tree: query_tree(1, 0, N-1, i, j)
 */

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

#include <string.h>
#include <math.h> 

#define N 100005
#define inf 0x7fffffff

int arr[N];
int tree1[N];
int tree2[N];
int tree3[N];

/**
 * Build and init tree
 */
void build_tree(int node, int a, int b) {
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    	tree1[node] = arr[a]; // Init value
    	tree2[node] = arr[a]; // Init value
    	tree3[node] = arr[a]; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree1[node] = tree1[node*2]^tree1[node*2+1]; // Init root value
	tree2[node] = tree2[node*2]&tree2[node*2+1]; // Init root value
	tree3[node] = tree3[node*2]|tree3[node*2+1]; // Init root value
}

/**
 * Increment elements within range [i, j] with value value
 */
void update_tree(int node, int a, int b, int i, int j, int value) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    	tree1[node] = value;
    	tree2[node] = value;
    	tree3[node] = value;
    	return;
	}

	update_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree1[node] = tree1[node*2]^tree1[node*2+1]; // Updating root with max value
	tree2[node] = tree2[node*2]&tree2[node*2+1]; // Updating root with max value
	tree3[node] = tree3[node*2]|tree3[node*2+1]; // Updating root with max value
}

/**
 * Query tree to get max element value within range [i, j]
 */
int query_tree1(int node, int a, int b, int i, int j) {
	
	if(a > b || a > j || b < i) return 0; // Out of range

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree1[node];

	int q1 = query_tree1(node*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree1(1+node*2, 1+(a+b)/2, b, i, j); // Query right child

	int res = q1^q2; // Return final result
	
	return res;
}

/**
 * Query tree to get max element value within range [i, j]
 */
int query_tree2(int node, int a, int b, int i, int j) {
	
	if(a > b || a > j || b < i) return (~0); // Out of range

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree2[node];

	int q1 = query_tree2(node*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree2(1+node*2, 1+(a+b)/2, b, i, j); // Query right child

	int res = q1&q2; // Return final result
	
	return res;
}

/**
 * Query tree to get max element value within range [i, j]
 */
int query_tree3(int node, int a, int b, int i, int j) {
	
	if(a > b || a > j || b < i) return 0; // Out of range

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree3[node];

	int q1 = query_tree3(node*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree3(1+node*2, 1+(a+b)/2, b, i, j); // Query right child

	int res = q1|q2; // Return final result
	
	return res;
}

int main() {
	int n, q;
	scanf("%d %d", &n, &q);
	
	for(int i=0;i<n;++i){
		scanf("%d", &arr[i]); 
	}

	build_tree(1, 0, n-1);

	while(q--){
		int action;
		scanf("%d", &action);
		if(action==1){
			int val, index;
			scanf("%d %d", &val, &index);
			update_tree(1, 0, n-1, index-1, index-1, val); // Increment range [0, 6] by 5
		} else {
			char option[10];
			int l, r;
			scanf("%s %d %d", option, &l, &r);
			if(option[0]=='O'){
				cout << query_tree3(1, 0, n-1, l-1, r-1) << endl; // Get max element in range [0, N-1]*/
			} else if(option[0]=='X'){
				cout << query_tree1(1, 0, n-1, l-1, r-1) << endl; // Get max element in range [0, N-1]*/
			} else {
				cout << query_tree2(1, 0, n-1, l-1, r-1) << endl; // Get max element in range [0, N-1]*/
			}
		}
	}
/*
	for(int i = 0; i < N; i++)
		arr[i] = 1;

	build_tree(1, 0, N-1);

	memset(lazy, 0, sizeof lazy);

	update_tree(1, 0, N-1, 0, 6, 5); // Increment range [0, 6] by 5
	update_tree(1, 0, N-1, 7, 10, 12); // Incremenet range [7, 10] by 12
	update_tree(1, 0, N-1, 10, N-1, 100); // Increment range [10, N-1] by 100

	cout << query_tree(1, 0, N-1, 0, N-1) << endl; // Get max element in range [0, N-1]*/
}