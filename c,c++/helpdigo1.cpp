#include<iostream>
#include <stdio.h>
#include <string.h>
#include<cstdio>
 
using namespace std;
 
#define MAXN  300000  /* maximum value of N */
#define P1    4687    /* = ceil(MAXN/64) */
#define P2    150000   /* = ceil(MAXN/2) */
#define P3    273       /* = ceil(ceil(sqrt(MAXN))/2) */
 
int sieve[P1];
 
#define GET(b) ((sieve[(b)>>5]>>((b)&31))&1)
 
void make()
{
    int i, j, k;
    memset(sieve, 0, sizeof(sieve));
    for (k = 1; k <= P3; k++)
        if (GET(k)==0) for(j=2*k+1,i=2*k*(k+1);i<P2;i+=j) sieve[i>>5]|=1<<(i&31);
}
 
int isprime(int p) { return p==2 || (p>2 && (p&1)==1 && (GET((p-1)>>1)==0)); }
 
int main()
{
    int i, n,t,lim,max,n1,j;
    
    scanf("%d",&t);
    
    make();
    
    while(t--)
    {
    	scanf("%d %d",&lim,&max);
    	for (n = 0, i = 0;i<lim;i++)
        if (isprime(i))
			{n++;}
		
//		printf("%d\n",i);
			
		if(i==lim)
		{
			i++;
		}
		
		for (n1 = 0, j = i;n1<n;j++)
        if (isprime(j))
			{n1++;}
			
		--j;
			
//		printf("%d",j);
			
		if(j>max)
			printf("NO\n");
		else
			printf("YES\n");
    }
    
    return 0;
}
