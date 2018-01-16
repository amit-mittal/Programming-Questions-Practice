#include<stdio.h>
#include<string.h>

int main()
{
	char a[110],b[110];
	int j,i;
	while(scanf("%s",a)==1)
	{
		j=0;
//		for(i=strlen(a)-1;a[i]=='0';--i)
	//	{
		//	a[i]='9';
		//}
		for(i=strlen(a)-1;i>=0;--i)
		{
			b[j]=2*(a[i]-'0');
			++j;
		}
		
		for(j=strlen(b)-1;j>=0;--j)
			{
			printf("%d",b[j]);
			}
		printf("\n");
	}
	return 0;
}
