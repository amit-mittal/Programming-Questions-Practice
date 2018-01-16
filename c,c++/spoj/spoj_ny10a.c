#include<stdio.h>

int main()
{
	int test,num,i,j;
	char string[45];
	char a[10][5]={{"TTT"},{"TTH"},{"THT"},{"THH"},{"HTT"},{"HTH"},{"HHT"},{"HHH"}};
	char c[5];
	scanf("%d",&test);
	while(test--)
	{
		int b[10]={0};
		scanf("%d %s",&num,string);

		for(i=0;i<38;++i)
		{
			c[0]=string[i];c[1]=string[i+1];c[2]=string[i+2];c[3]='\0';
			for(j=0;j<8;++j)
			{
				if(strcmp(c,a[j])==0)
				{
					b[j]++;
					break;
				}
			}
		}
		printf("%d",num);
		for(i=0;i<8;++i)
			printf(" %d",b[i]);
		printf("\n");
	}
	return 0;
}
