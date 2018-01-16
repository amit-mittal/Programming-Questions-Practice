#include<stdio.h>
#include<string.h>

long long int gcd(long long int x,long long int y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}

int main()
{
	char string[30];
	int i,len;

	scanf("%s",string);
	
	while(string[0]!='*')
	{
		long long int num=1,hcf;
		
		len=strlen(string);
		
		for(i=len-1;i>=0;--i)
		{
			if(string[i]=='Y')
			{
				hcf=gcd(num,i+1);
				num=num*(i+1)/hcf;
			}
		}
		
		for(i=0;i<len;++i)
		{
			if(num%(i+1)==0)
			{
				if(string[i]!='Y')
					num=-1;
			}
			else
			{
				if(string[i]=='Y')
					num=-1;
			}
		}
		
		printf("%lld\n",num);
				
		scanf("%s",string);
	}
	
	return 0;
}
