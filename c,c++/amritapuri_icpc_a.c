/*

ACM International Collegiate Programming Contest, Asia-Amritapuri Site, 2012
Problem A: Summing Intervals
You are given an array of N numbers, and for a set of Q queries (L, R), you wish to find the sum of all the elements in the array having indices between L and R inclusive
Input (STDIN):
The first line consists of the number T: the number of testcases
Each test case begins with a line consisting of two numbers: N and Q
This is followed by a line consisting of N integers - the elements of the array.
The remaining Q lines consist of two integers each, L and R
Output (STDOUT):
For each query of the form (L, R), you should output the sum of the array elements indexed from L to R.
Constraints:
T <= 20
N <= 10^5
Q <= 10^5
|a_i| <= 10^6, where a_i is the i-th element of the array
0 <= L <= R < N for all queries
Time Limit: 5 s
Memory Limit: 64 MB
Sample Input:
2
5 2
1 4 2 5 3
1 2
0 4
5 2
-100000 -50000 0 50000 100000
1 3
0 4

Sample Output:
6
15
0
0

*/

#include <stdio.h>

int main(){
	int test,i,j,q,val,n,l,r;
	long long int prev,a[100005];

	scanf("%d",&test);

	while(test--){
		scanf("%d %d",&n,&q);

		prev=0;
		for(i=0;i<n;++i){
			scanf("%d",&val);
			prev+=val;

			a[i]=prev;
		}

		while(q--){
			scanf("%d %d",&l,&r);

			if(l==0){
				printf("%lld\n",a[r]);
			}
			else{
				printf("%lld\n", a[r]-a[l-1]);
			}
		}
	}

	return 0;
}