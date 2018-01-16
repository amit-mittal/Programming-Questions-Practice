#include<stdio.h>
#include<math.h>

int main()
{
	int a=1,b=1,c=1,s1,s2;
	
	scanf("%d %d %d",&a,&b,&c);
	
	while(a!=0||b!=0||c!=0)
	{
	
	if(c>a&&c>b)
	{
		s1=c*c;
		s2=a*a+b*b;
	}
	else if(a>b&&a>c)
	{
		s1=a*a;
		s2=b*b+c*c;
	}
	else
	{
		s1=b*b;
		s2=a*a+c*c;
	}
	
	if(s1==s2)
		printf("right\n");
	else
		printf("wrong\n");
		
	scanf("%d %d %d",&a,&b,&c);
	}
	
	return 0;
}
