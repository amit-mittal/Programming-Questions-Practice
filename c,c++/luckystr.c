#include<stdio.h>
#include<string.h>

int main()
{
	int k,n,good,i,j;
	char sk[51][55],string[55];
	
	scanf("%d%d",&k,&n);
	
	for(i=0;i<k;++i)
		scanf("%s",sk[i]);
		
	for(i=0;i<n;++i)
	{
		good=0;
		scanf("%s",string);
		
		if(strlen(string)>=47)
			good=1;
		
		for(j=0;j<k&&good!=1;++j)
		{
			if(strstr(string,sk[j])!=NULL)
			{
				good=1;
				break;
			}
		}
		
		if(1==good)
			printf("Good\n");
		else
			printf("Bad\n");
	}
	
	return 0;
}
