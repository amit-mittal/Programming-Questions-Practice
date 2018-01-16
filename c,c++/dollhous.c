#include<stdio.h>
#include<math.h>

int count=0;
//int a[100000000]={0};

int c(int i)
{
	if(i==0)
		++count;
	else if(i<0)
		return -1;
	else
	{
		c(i-1);
		c(i-2);
	}
}

int main()
{
	int n,p;
	
	scanf("%d",&n);
if(n>=2){
	if(n&1==1)
	{
		p=(n/2)+1;
		count=pow(2,p)-1;
	}
	else
	{
		p=(n/2)+1;
		count=pow(2,p)-1;
		count=count-(n/2);
	}}
else
	count=0;
	
	printf("%d\n",count);
	
	return 0;
}
