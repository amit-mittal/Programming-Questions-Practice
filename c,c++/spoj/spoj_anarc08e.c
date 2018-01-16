#include<stdio.h>

int comb(int a,int b)
{
	int l,s,p=1,i;
	if(a>b)
	{
		l=a;
		s=b;
	}
	else
	{
		l=b;
		s=a;
	}
	for(i=l+1;i<=a+b;++i)
		p*=i;
	for(i=2;i<=s;++i)
		p/=i;
		
	return p;
}

int main()
{
	int a,b,val;

	scanf("%d %d",&a,&b);
	
	while(a!=-1||b!=-1)
	{		
		val=comb(a,b);
		if(val==a+b)
			printf("%d+%d=%d\n",a,b,val);
		else
			printf("%d+%d!=%d\n",a,b,a+b);
			
		scanf("%d %d",&a,&b);
	}
	
	return 0;
}	
