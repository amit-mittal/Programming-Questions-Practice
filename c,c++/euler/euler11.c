#include<stdio.h>

int main()
{
	int i,j,a[20][20],max=-1,mul1,mul2,i1,j1,mul3,mul4;
	FILE *fp;
	fp=fopen("input.txt","r");
	
	for(i=0;i<20;++i)
	{
		for(j=0;j<20;++j)
		{
			fscanf(fp,"%d",&a[i][j]);
		}
	}
	
	for(i=0;i<20;++i)
	{
		for(j=0;j<20;++j)
		{
			mul1=a[i][j]*a[(i+1)%20][j]*a[(i+2)%20][j]*a[(i+3)%20][j];
			mul2=a[i][j]*a[i][(j+1)%20]*a[i][(j+2)%20]*a[i][(j+3)%20];
			mul3=a[i][j]*a[(i+1)%20][(j+1)%20]*a[(i+2)%20][(j+2)%20]*a[(i+3)%20][(j+3)%20];
			if(i-3>=0)
			mul4=a[i][j]*a[(i-1)%20][(j+1)%20]*a[(i-2)%20][(j+2)%20]*a[(i-3)%20][(j+3)%20];
			
			if(mul1>max)
			{
				i1=i;
				j1=j;
				max=mul1;
			}
			else if(mul2>max)
			{
				i1=i;
				j1=j;
				max=mul1;
			}
			else if(mul3>max)
			{
				i1=i;
				j1=j;
				max=mul3;
			}
			else if(mul4>max)
			{
				i1=i;
				j1=j;
				max=mul4;
			}
		}
	}
	
	printf("max=%d at row=%d col=%d\n",max,i1+1,j1+1);
	
	fclose(fp);
	
	return 0;
}
