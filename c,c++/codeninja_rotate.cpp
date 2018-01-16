/*
GIven a 2D NxN matrix, visualize it as concentric circles. You have to find the rotated matrix where each element in the circle is rotated by 1 position layer by layer in an alternate clockwise and anticlockwise direction.

Input Format:

First line of input contains an integer, N.

Then follow N lines, each containing N space separated integers. These numbers are the entries of given matrix.

Output Format:

Print to output the resultant matrix. Each row has to be printed in a separate line and within each row adjecent numbers should be separated by a space.

Sample Input:
4
2 3 4 5
1 6 7 8
4 2 1 9
5 3 2 4

Sample Output:
1 2 3 4 
4 7 1 5 
5 6 2 8 
3 2 4 9 
 
Constraints : 
 
1 <= N <= 1000
0 <= x <= 1000 , where x is any element present in the matrix.

*/

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cctype>
#include<numeric>
#include<stdlib.h>
#include<string>

using namespace std;

int n,b[1001][1001];

void top(int a[][1001],int i,int type)
{
	if(type==0)//clockwise
	{
		int k;

		for(k=1;k<n-2*i;++k)
		{
			b[i][k+i]=a[i][k+i-1];
		}
	}
	else//anticlockwise
	{
		int k;
		
		for(k=0;k<n-2*i-1;++k)
		{
			b[i][k+i+1]=a[i][k+i];
		}		
	}
}

void right(int a[][1001],int i,int type)
{
	int k;
	if(type==0)//clock
	{
		for(k=0;k<n-1;++k)
		{
			b[i+k][i]=a[k+1][i];
		}
	}
	else//anti
	{
		for(k=1;k<n-1;++k)
		{
			b[k][i]=a[k+1][i];
		}
		
		b[n-i-1][i]=a[n-i-1][i+1];
	}
}

int main()
{
	int a[1001][1001],counter=0,i,j;
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
		for(j=0;j<n;++j)
			scanf("%d",&a[i][j]);
	
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n");
			
	top(a,0,0);
	top(a,1,0);
			
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	while(counter<n/2)
	{
		
		++counter;
	}
	
	return 0;
}
