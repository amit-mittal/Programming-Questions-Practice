#include<stdio.h>

int main()
{
	int i,j,a[110][110],min;
	char ch;
	FILE *fp;
	fp=fopen("input.txt","r");
	
	for(i=0;i<80;++i)
	{
		for(j=0;j<80;++j)
		{
			fscanf(fp,"%d",&a[i][j]);
			fscanf(fp,"%c",&ch);
		}
	}
	
//	printf("%d\n",a[14][14]);
	
	for(i=78;i>=0;--i)
	{
		for(j=0;j<79;++j)
		{
			if(j==79)
			{
				a[i][j]+=a[i+1][j];
			}
			else
			{
				if(a[i+1][j]<a[i+1][j+1])
					a[i][j]+=a[i+1][j];
				else
					a[i][j]+=a[i+1][j+1];
			}
		}
	}
	
	printf("min=%d\n",a[0][0]);
	
	fclose(fp);
	
	return 0;
}
