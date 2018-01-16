#include<stdio.h>

int main()
{
	char ch,string[60];
	int i,j,a[100][50],sum[100]={0};
	FILE *fp;

	fp=fopen("input.txt","r");
	
	for(i=0;i<100;++i)
	{
		fscanf(fp,"%s",string);
		for(j=0;j<50;++j)
		{
				a[i][j]=string[j]-'0';
		}
	}
	
	int temp,carry;
	int k=0;
	for(i=49;i>=0;--i)
	{
		temp=0;
		for(j=0;j<100;++j)
		{
			temp+=a[j][i];
		}
		temp+=carry;
		sum[k]=temp%10;
		carry=temp/10;
		
		++k;
	}
	
	while(carry>0)
	{
		sum[k]=carry%10;
		carry/=10;
		++k;
	}
	
	for(i=0;i<100;++i)
		printf("%d",sum[i]);
	
	fclose(fp);
}
