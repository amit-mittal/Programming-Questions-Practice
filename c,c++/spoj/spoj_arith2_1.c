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
	getchar();getchar();
	
	while(t--)
	{
		long long num,result;
		int count=0;
		
		scanf("%lld",&num);
		
		ch='0';
		while(ch!='+'||ch!='*'||ch!='/'||ch!='-'||ch!='=')
		{
			ch1=getchar();
			ch=getchar();
		}
		
		if(count==0)
		
			if(ch=='+')
			{
				op
				c=1;
			}
			else if(ch=='*')
			{	
				c=2;
			}
			else if(ch=='/')
			{	
				c=3;
			}
			else if(ch=='-')
			{	
				c=4;
			}
			else if(ch=='=')
			{
				printf("%lld\n",result);
			}
		
	}

	return 0;
}
