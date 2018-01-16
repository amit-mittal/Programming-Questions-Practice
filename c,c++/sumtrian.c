#include<stdio.h>

#define isdigit(c) (c>='0' && c<='9')

int main()
{
	int test,i,row,j,num;
	char ch;
	
	scanf("%d\n",&test);
	
	while(test--)
	{
		num=0;
		int a[101][101]={0};
		scanf("%d\n",&row);
		//this input method is very slow
/*		for(i=0;i<row;++i)
			for(j=0;j<=i;++j)
				scanf("%d",&a[i][j]);*/
				
		for(i=0;i<row;++i)
		{
			for(j=0;j<=i;++j)
			{
				num = 0;
				while(!isdigit(ch))
					ch = getchar();
				do
				{
					num = num*10 + ch-'0';
					ch=getchar();
				}while(isdigit(ch));
				
				a[i][j] = num;
			}
		}
				
		for(i=row-2;i>=0;--i)
		{
			for(j=0;j<=i;++j)
			{
				if(a[i+1][j]>a[i+1][j+1])
					a[i][j]+=a[i+1][j];
				else
					a[i][j]+=a[i+1][j+1];
				//a[i][j]+=a[i+1][j]>a[i+1][j+1]?a[i+1][j]:a[i+1][j+1];
			}
		}
				
		printf("%d\n",a[0][0]);
	}
	
	return 0;
}
