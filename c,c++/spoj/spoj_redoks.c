#include<stdio.h>

int main()
{
	int n,m,sum,i,a,b;
	char string[250005];
	
	scanf("%d %d",&n,&m);
	scanf("%s",string);
	
	while(m--)
	{
		sum=0;
		scanf("%d %d",&a,&b);
		
		for(i=a-1;i<b;++i)
		{
			sum+=string[i]-'0';
			string[i]='0'+((string[i]-'0'+1)%10);
		}
		
		printf("%d\n",sum);
	}
	
	return 0;
}
