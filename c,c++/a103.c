#include<stdio.h>

int main()
{
	int test,i,j,count;
	char string[10];
	
	scanf("%d",&test);
	
	while(test--)
	{
		count=0;
		int a[10][10]={0};
		
		scanf("%s",string);
		
		a[string[0]-'a'][string[1]-1]=1;
		
		i=string[0]-'a';
		j=string[1]-'1';
	
		if(i+2<8)
		{
			if(j+1<8)
			{
				++count;
			}
			if(j-1>=0)
			{
				++count;
			}
		}
		
		if(i-2>=0)
		{
			if(j+1<8)
			{
				++count;
			}
			if(j-1>=0)
			{
				++count;
			}
		}
		
		if(j+2<8)
		{
			if(i+1<8)
			{
				++count;
			}
			if(i-1>=0)
			{
				++count;
			}
		}
		
		if(j-2>=0)
		{
			if(i+1<8)
			{
				++count;
			}
			if(i-1>=0)
			{
				++count;
			}
		}
		
		printf("%d\n",count);
	}	
	return 0;
}
