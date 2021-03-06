//Author: Amit Mittal
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <climits>

using namespace std;

#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define lls(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define llp(a) printf("%lld",a)
#define sp(a) printf("%s",a)
#define cp(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

// A utility function to get minimum of two numbers
int minVal(int x, int y) { return (x < y)? x: y; }
int maxVal(int x, int y) { return (x > y)? x: y; }
 
// A utility function to get the middle index from corner indexes.
int getMid(int s, int e) {  return s + (e -s)/2;  }
 
/*  A recursive function to get the minimum value in a given range of array
	indexes. The following are parameters for this function.
 
	st    --> Pointer to segment tree
	index --> Index of current node in the segment tree. Initially 0 is
			 passed as root is always at index 0
	ss & se  --> Starting and ending indexes of the segment represented by
				 current node, i.e., st[index]
	qs & qe  --> Starting and ending indexes of query range */
int RMQUtil(int *st, int ss, int se, int qs, int qe, int index)
{
	// If segment of this node is a part of given range, then return the
	// min of the segment
	if (qs <= ss && qe >= se)
		return st[index];
 
	// If segment of this node is outside the given range
	if (se < qs || ss > qe)
		return INT_MAX;
 
	// If a part of this segment overlaps with the given range
	int mid = getMid(ss, se);
	return minVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
				  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}
 
// Return minimum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses RMQUtil()
int RMQ(int *st, int n, int qs, int qe)
{
	// Check for erroneous input values
	if (qs < 0 || qe > n-1 || qs > qe)
	{
		printf("Invalid Input");
		return -1;
	}
 
	return RMQUtil(st, 0, n-1, qs, qe, 0);
}
 
// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
	// If there is one element in array, store it in current node of
	// segment tree and return
	if (ss == se)
	{
		st[si] = arr[ss];
		return arr[ss];
	}
 
	// If there are more than one elements, then recur for left and
	// right subtrees and store the minimum of two values in this node
	int mid = getMid(ss, se);
	st[si] =  minVal(constructSTUtil(arr, ss, mid, st, si*2+1),
					 constructSTUtil(arr, mid+1, se, st, si*2+2));
	return st[si];
}
 
/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
int *constructST(int arr[], int n)
{
	// Allocate memory for segment tree
	int x = (int)(ceil(log2(n))); //Height of segment tree
	int max_size = 2*(int)pow(2, x) - 1; //Maximum size of segment tree
	int *st = new int[max_size];
 
	// Fill the allocated memory st
	constructSTUtil(arr, 0, n-1, st, 0);
 
	// Return the constructed segment tree
	return st;
}

int RMQUtil_max(int *st, int ss, int se, int qs, int qe, int index)
{
	if (qs <= ss && qe >= se)
		return st[index];
 
	if (se < qs || ss > qe)
		return 0;
 
	int mid = getMid(ss, se);
	return maxVal(RMQUtil_max(st, ss, mid, qs, qe, 2*index+1),
				  RMQUtil_max(st, mid+1, se, qs, qe, 2*index+2));
}
 
int RMQ_max(int *st, int n, int qs, int qe){ 
	return RMQUtil_max(st, 0, n-1, qs, qe, 0);
}
 
int constructSTUtil_max(int arr[], int ss, int se, int *st, int si)
{
	if (ss == se)
	{
		st[si] = arr[ss];
		return arr[ss];
	}
 
	int mid = getMid(ss, se);
	st[si] =  maxVal(constructSTUtil_max(arr, ss, mid, st, si*2+1),
					 constructSTUtil_max(arr, mid+1, se, st, si*2+2));
	return st[si];
}

int *constructST_max(int arr[], int n)
{
	int x = (int)(ceil(log2(n)));
	int max_size = 2*(int)pow(2, x) - 1;
	int *st = new int[max_size];

	constructSTUtil_max(arr, 0, n-1, st, 0);
 
	return st;
}

int main() {
	int n, q, arr[100005], i, l, r;
	s(n);
	FOR(i, 0, n){
		s(arr[i]);
	}
	s(q);
	int *st = constructST(arr, n);
	int *st_max = constructST_max(arr, n);
	while(q--){
		s(l), s(r);
		double fastest = (double)RMQ(st, n, l, r);
		double slowest = (double)RMQ_max(st_max, n, l, r) - fastest;
		double slowest1 = (double)RMQ_max(st_max, n, 0, l-1);
		double slowest2 = (double)RMQ_max(st_max, n, r+1, n-1);

		slowest1 = max(slowest1, slowest2);

		double ans1 = (double)slowest/2.0;
		if(ans1>slowest1){
			printf("%.1lf\n", ans1+fastest);
		} else{
			printf("%.1lf\n", slowest1+fastest);
		}

	}

	return 0;
}
