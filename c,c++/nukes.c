#include<stdio.h>

void check(int pl[],int i,int n)
{
	if(pl[i]>n)
		{
			pl[i]=0;
			++pl[i+1];
			check(pl,i+1,n);
		}
}

int main()
{
	int a,n,k,pl[105]={0},i;

	scanf("%d %d %d",&a,&n,&k);
	
	while(a--)
	{
		++pl[0];
		check(pl,0,n);
	}
	
	for(i=0;i<k;++i)
		printf("%d ",pl[i]);
		
	printf("\n");
	
	return 0;
}

//alternate very fast solution
/*
#include <stdio.h>
#include <string.h>
 
int main ()
{
unsigned long long a;
int n, k, top, i;
int res[100];
memset(res, 0, sizeof(res));
scanf("%lld %d %d", &a, &n, &k);
top = 0;n++;
while ( a > 0 )
{
if (top >= k)
break;
res[top] = a % n;
a /= n;
++top;
}
printf("%d", res[0]);
for (i=1; i<k; i++)
printf(" %d", res[i]);
return 0;
}
*/
