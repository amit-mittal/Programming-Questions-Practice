#include<stdio.h>
#include<ctype.h>

int c=0;

long long int op(long long result,long long num)
{
	if(c==1)
		return result+num;
	else if(c==2)
		return result*num;
	else if(c==3)
		return result/num;
	else if(c==4)
		return result-num;
	else
		return num;
}

int main()
{
	int t;

	scanf("%d",&t);
	getchar();
	while(t--)
	{
		long long num,result;
		char ch;
		
		c=0;result=0;
		num=0;
		while(!isdigit(ch))
			ch=getchar();
		
		while(ch!='\n')
		{
			if(isdigit(ch))
				num=num*10+(ch-'0');
			ch=getchar();
			
			printf("%lld %lld\n",num,result);
			
			if(ch=='+')
			{	c=1;num=op(result,num);result=num;num=0;}
			else if(ch=='*')
			{	c=2;num=op(result,num);result=num;num=0;}
			else if(ch=='/')
			{	c=3;num=op(result,num);result=num;num=0;}
			else if(ch=='-')
			{	c=4;num=op(result,num);result=num;num=0;}
			else if(ch=='=')
			{printf("%lld\n",result);}
			
			
				
		}
		
		
	}

	return 0;
}
