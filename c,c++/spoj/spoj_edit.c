#include<stdio.h>
#include<string.h>

int main()
{
	int count1,count2,i,choice;
	char a[1005];
	
	while(scanf("%s",a)==1)
	{
		count1=0;count2=0;
		
			
		for(i=0;i<strlen(a);++i)
		{
				if(i%2==0&&a[i]<97)
				{
					count1++;
				}
				else if(i%2!=0&&a[i]>=97)
				{
					count1++;
				}
			
				if(i%2==0&&a[i]>=97)
				{
					count2++;
				}
				else if(i%2!=0&&a[i]<97)
				{
					count2++;
				}
			
		}
		printf("%d\n",min(count1,count2));//make a function for min
	}
	
	return 0;
}
