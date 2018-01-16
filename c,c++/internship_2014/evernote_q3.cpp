/*
 * @Author: Amit Mittal
 * Time Complexity: O(n)
 * Auxiliary Space: O(1)
 * @param n: size of input
 * Handling the cases:
 * 1. if one or more entry is zero
 * 2. product of all values goes out of 64bit limit
 */

#include <iostream>
#include <cstdio>

using namespace std;

#define ll long long

int main(){
	int n;
	ll int *a;
	int count_zero = 0;//counts number of zero in array

	//taking input
	scanf("%d",&n);
	a = new ll int[n];
	for(int i=0;i<n;++i){
		scanf("%lld",&a[i]);
		if(a[i]==0)
			++count_zero;
	}


	if(count_zero>1){//if more than 1 entry is 0 in array
		for(int i=0;i<n;++i)
			a[i] = 0;
	} else if(count_zero == 1){//if exactly 1 entry is zero
		ll int prod = 1L;
		int index_zero = 0;
		for(int i=1;i<n;++i){
			if(a[i]!=0)
				prod *= a[i];
			else
				index_zero = i;
		}

		for(int i=0;i<n;++i){
			if(i == index_zero)
				a[i] = prod;
			else
				a[i] = 0;
		}
	} else {//if none of the entry is 0
		ll int prod = 1L;
		for(int i=1;i<n;++i){
			prod *= a[i];
		}

		ll int prev = a[0];
		a[0] = prod;
		for(int i=1;i<n;++i){
			prod /= a[i];
			prod *= prev;
			prev = a[i];
			a[i] = prod;
		}
	}

	//printing the answer
	for(int i=0;i<n;++i)
		printf("%lld\n", a[i]);

	return 0;
}