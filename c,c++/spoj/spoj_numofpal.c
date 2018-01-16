#include<stdio.h>
#include<string.h>

int palin(char string[])
{
	int count=0,i;
	
	for(i=0;i<=strlen(string)/2;++i)
	{
		if(string[i]==string[strlen(string)-i-1])
			++count;
		else
			return 0;
	}
	return 1;
}

int main()
{
	char string[1002];
	int i,j,count=0,len,end;

	scanf("%s",string);
	
//	printf("%d\n",palin(string));
	len=strlen(string);

	if(palin(string))
	{
		if(len%2==0)
		{
			end=(len/2)-1;
			count+=end+1;
		}
		else
		{
			end=len/2;
			count+=end;
		}
			
		for(i=1;i<end;++i)
		{
			j=1;
			while(string[i-j]==string[i+j])
			{
	//			printf("%d i=%d j=%d\n",count,i,j);
				count+=2;
				++j;
			}
		}
		count+=len;
		
		printf("%d\n",count);
	}
	else
	{
		printf("0\n");
	}
	
	return 0;
}
