#include<stdio.h>
#include<string.h>

int function(int val)
{
	int p=1;
	int i=1,j,r,temp,prev=1;
	int string[100];
	int end=1;
	string[0]=1;
	
	while(i<=val)
	{
		temp=0;
	
		for(j=0;j<end;++j)
		{
			p=string[j]*i+temp;
			
			r=p%10;
			string[j]=r;
			temp=p/10;
		}
		printf("temp: %d\n",temp);
		
		while(temp>0)
		{
			r=temp%10;
			string[end]=r;
			temp/=10;
			end++;
		}
		printf("%d\n",end);
		
		++i;
	}
	
	for(i=end-1;i>=0;--i)
		printf("%d",string[i]);
		
	printf("\n");
		
	return 0;
}

int main()
{
	int val;
	scanf("%d",&val);
	function(val);
	return 0;
}
