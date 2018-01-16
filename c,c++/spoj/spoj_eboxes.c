#include<stdio.h>

/*
From one obtained by the formula. May be obtained even number of non-empty box. Stuffing box when the K, the number of empty boxes of K-1 each increase, a box will increase non-empty one. Therefore, when a non-empty boxes and x, x * ( K-1 ) + N = F. Thus, the number of non-empty box (FN) / ( K-1 and).
*/

int main ()
{
 int C,val;
	 scanf ("%d", &C);
	 while (C--) {
		 int N, K, T, F;
		 scanf ("%d%d%d%d", &N, &K, &T, &F);
		 val=(F-N)/(K-1)+F;
		 printf ("%d\n", val);
	 }

	 return 0;
 }
