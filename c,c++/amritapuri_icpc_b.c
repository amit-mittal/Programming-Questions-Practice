/*
ACM International Collegiate Programming Contest, Asia-Amritapuri Site, 2011
Problem D: Sub-sequences
Having discovered that the Muggle-born* students of Hogwarts School of Witchcraft & Wizardry are all on Facebook, Headmaster Dumbledore decided to go with the flow and has hired an ICPC World Finalist to teach all the students about this 'compooter-thingy' and how to program it to do its 'automatic spells'. Harry is struggling with his latest homework assignment, which is as follows:

You are given a sequence of N numbers A[1..N]. Consider a sub-sequence** such that the bitwise AND of all the numbers of the sub-sequence is equal to the bitwise OR of all the numbers of the sub-sequence. Amongst all such sub-sequences, find the sub-sequence that has the maximum sum of the numbers, and print this maximum sum. 

Can you help Harry finish his homework before he chews through all his writing quills in frustration?

*Muggle-born: Magical children born of non-magical parents.
Input (STDIN):
The first line contains the number of test cases T. T cases follow. Each test case consists of N in the first line followed by N space-separated integers on the next line denoting the values A[1..N].
Output (STDOUT):
Output T lines, one for each case containing the required answer(maximum sum as explained in the problem) for the corresponding case.
Constraints:
1 <= T <= 20
1 <= N <= 10000
0 <= A[i] <= 10000
Sample Input:
2
3
1 2 3
2
1 1
Sample Output:
3
2
Notes:
**A sub-sequence is a sequence that can be derived from another sequence by deleting 0 or more elements without changing the order of the remaining elements.

A bitwise AND of two integers is the logical AND operation on each pair of corresponding bits in the binary representation of the two integers.
For example,
    0101 (decimal 5)
AND 0011 (decimal 3)
  = 0001 (decimal 1)
The bitwise OR operation is the logical AND operation on each pair of corresponding bits in the binary representation of the two integers.
   0101 (decimal 5)
OR 0011 (decimal 3)
 = 0111 (decimal 7)

*/


#include <stdio.h>

int main(){
	int test,n,val,max,i;
	long long int prev;

	scanf("%d",&test);

	while(test--){
		int a[100005]={0};

		scanf("%d",&n);

		max=-1;
		prev=-1;
		for(i=0;i<n;++i){
			scanf("%d",&val);
			a[val]++;

			if(val>max)
				max=val;
		}

		for(i=0;i<=max;++i){
			if(a[i]*i>prev)
				prev=a[i]*i;
		}

		printf("%lld\n", prev);
	}

	return 0;
}