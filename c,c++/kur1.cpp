#include<stdio.h>

int main()
{
int test,n,p,m,i,sum,pro,num;

scanf("%d",&test);

while (test--)
{
	scanf("%d %d %d",&n,&p,&m);
	sum=0;
	for(i=0;i<n;++i)
	{	
		scanf("%d",&num);
		sum+=num;
	}
	
	pro=1;

	for(i=0;i<p;++i)
	{
		pro*=sum;
		if(pro>m)
			pro=pro%m;
	}
	printf("%d\n",pro);
}

return 0;
}
