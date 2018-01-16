#include<stdio.h>

int main()
{
	int i,j,a[110][110],max=-1,mul1,mul2,i1,j1,mul3,mul4;
	FILE *fp;
	fp=fopen("input.txt","r");
	
	for(i=0;i<100;++i)
	{
		for(j=0;j<=i;++j)
		{
			fscanf(fp,"%d",&a[i][j]);
		}
	}
	
//	printf("%d\n",a[14][14]);
	
	for(i=98;i>=0;--i)
	{
		for(j=0;j<=i;++j)
		{
			if(a[i+1][j]>a[i+1][j+1])
				a[i][j]+=a[i+1][j];
			else
				a[i][j]+=a[i+1][j+1];
		}
	}
	
	printf("max=%d\n",a[0][0]);
	
	fclose(fp);
	
	return 0;
}
