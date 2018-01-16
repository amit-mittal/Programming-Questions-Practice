#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	char s[100003],a[2005];

	scanf("%s",s);
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%s",a);
		if(strstr(s,a)!=NULL)
			printf("Y\n");
		else
			printf("N\n");
	}

	return 0;	
}
